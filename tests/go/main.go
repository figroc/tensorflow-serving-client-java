package main

import (
	"flag"
	"log"
	"context"
	"google.golang.org/grpc"
	tff "tensorflow/core/framework"
	tfs "tensorflow_serving/apis"
)

var (
	serverAddr = flag.String("r", "127.0.0.1:8500", "grpc endpoint")
	modelName  = flag.String("m", "half_plus_two",  "model name")
)

func main() {
	flag.Parse()

	req := &tfs.PredictRequest{
		ModelSpec: &tfs.ModelSpec{
			Name: *modelName,
		},
		Inputs: map[string]*tff.TensorProto{
			"x": &tff.TensorProto{
				Dtype: tff.DataType_DT_FLOAT,
				TensorShape: &tff.TensorShapeProto{
					Dim: []*tff.TensorShapeProto_Dim{
						&tff.TensorShapeProto_Dim{
							Size: int64(3),
						},
					},
				},
				FloatVal: []float32{1.0, 2.0, 5.0},
			},
		},
	}

	conn, err := grpc.Dial(*serverAddr, grpc.WithInsecure(), grpc.WithBlock())
	if err != nil {
		log.Fatalln(err)
	}
	defer conn.Close()
	client := tfs.NewPredictionServiceClient(conn)

	rsp, err := client.Predict(context.Background(), req)
	if err != nil {
		log.Fatalln(err)
	}
	log.Println(rsp)
}
