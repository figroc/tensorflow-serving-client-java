module tfsclient

go 1.12

require (
	github.com/golang/protobuf v1.4.2
	golang.org/x/net v0.0.0-20190311183353-d8887717615a
	google.golang.org/grpc v1.30.0
	tensorflow v0.0.0-00010101000000-000000000000
	tensorflow_serving v0.0.0-00010101000000-000000000000
)

replace tensorflow => ./tensorflow
replace tensorflow_serving => ./tensorflow_serving

