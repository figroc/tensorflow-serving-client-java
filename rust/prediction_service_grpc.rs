// This file is generated. Do not edit
// @generated

// https://github.com/Manishearth/rust-clippy/issues/702
#![allow(unknown_lints)]
#![allow(clippy::all)]

#![allow(box_pointers)]
#![allow(dead_code)]
#![allow(missing_docs)]
#![allow(non_camel_case_types)]
#![allow(non_snake_case)]
#![allow(non_upper_case_globals)]
#![allow(trivial_casts)]
#![allow(unsafe_code)]
#![allow(unused_imports)]
#![allow(unused_results)]

const METHOD_PREDICTION_SERVICE_CLASSIFY: ::grpcio::Method<super::classification::ClassificationRequest, super::classification::ClassificationResponse> = ::grpcio::Method {
    ty: ::grpcio::MethodType::Unary,
    name: "/tensorflow.serving.PredictionService/Classify",
    req_mar: ::grpcio::Marshaller { ser: ::grpcio::pb_ser, de: ::grpcio::pb_de },
    resp_mar: ::grpcio::Marshaller { ser: ::grpcio::pb_ser, de: ::grpcio::pb_de },
};

const METHOD_PREDICTION_SERVICE_REGRESS: ::grpcio::Method<super::regression::RegressionRequest, super::regression::RegressionResponse> = ::grpcio::Method {
    ty: ::grpcio::MethodType::Unary,
    name: "/tensorflow.serving.PredictionService/Regress",
    req_mar: ::grpcio::Marshaller { ser: ::grpcio::pb_ser, de: ::grpcio::pb_de },
    resp_mar: ::grpcio::Marshaller { ser: ::grpcio::pb_ser, de: ::grpcio::pb_de },
};

const METHOD_PREDICTION_SERVICE_PREDICT: ::grpcio::Method<super::predict::PredictRequest, super::predict::PredictResponse> = ::grpcio::Method {
    ty: ::grpcio::MethodType::Unary,
    name: "/tensorflow.serving.PredictionService/Predict",
    req_mar: ::grpcio::Marshaller { ser: ::grpcio::pb_ser, de: ::grpcio::pb_de },
    resp_mar: ::grpcio::Marshaller { ser: ::grpcio::pb_ser, de: ::grpcio::pb_de },
};

const METHOD_PREDICTION_SERVICE_MULTI_INFERENCE: ::grpcio::Method<super::inference::MultiInferenceRequest, super::inference::MultiInferenceResponse> = ::grpcio::Method {
    ty: ::grpcio::MethodType::Unary,
    name: "/tensorflow.serving.PredictionService/MultiInference",
    req_mar: ::grpcio::Marshaller { ser: ::grpcio::pb_ser, de: ::grpcio::pb_de },
    resp_mar: ::grpcio::Marshaller { ser: ::grpcio::pb_ser, de: ::grpcio::pb_de },
};

const METHOD_PREDICTION_SERVICE_GET_MODEL_METADATA: ::grpcio::Method<super::get_model_metadata::GetModelMetadataRequest, super::get_model_metadata::GetModelMetadataResponse> = ::grpcio::Method {
    ty: ::grpcio::MethodType::Unary,
    name: "/tensorflow.serving.PredictionService/GetModelMetadata",
    req_mar: ::grpcio::Marshaller { ser: ::grpcio::pb_ser, de: ::grpcio::pb_de },
    resp_mar: ::grpcio::Marshaller { ser: ::grpcio::pb_ser, de: ::grpcio::pb_de },
};

#[derive(Clone)]
pub struct PredictionServiceClient {
    client: ::grpcio::Client,
}

impl PredictionServiceClient {
    pub fn new(channel: ::grpcio::Channel) -> Self {
        PredictionServiceClient {
            client: ::grpcio::Client::new(channel),
        }
    }

    pub fn classify_opt(&self, req: &super::classification::ClassificationRequest, opt: ::grpcio::CallOption) -> ::grpcio::Result<super::classification::ClassificationResponse> {
        self.client.unary_call(&METHOD_PREDICTION_SERVICE_CLASSIFY, req, opt)
    }

    pub fn classify(&self, req: &super::classification::ClassificationRequest) -> ::grpcio::Result<super::classification::ClassificationResponse> {
        self.classify_opt(req, ::grpcio::CallOption::default())
    }

    pub fn classify_async_opt(&self, req: &super::classification::ClassificationRequest, opt: ::grpcio::CallOption) -> ::grpcio::Result<::grpcio::ClientUnaryReceiver<super::classification::ClassificationResponse>> {
        self.client.unary_call_async(&METHOD_PREDICTION_SERVICE_CLASSIFY, req, opt)
    }

    pub fn classify_async(&self, req: &super::classification::ClassificationRequest) -> ::grpcio::Result<::grpcio::ClientUnaryReceiver<super::classification::ClassificationResponse>> {
        self.classify_async_opt(req, ::grpcio::CallOption::default())
    }

    pub fn regress_opt(&self, req: &super::regression::RegressionRequest, opt: ::grpcio::CallOption) -> ::grpcio::Result<super::regression::RegressionResponse> {
        self.client.unary_call(&METHOD_PREDICTION_SERVICE_REGRESS, req, opt)
    }

    pub fn regress(&self, req: &super::regression::RegressionRequest) -> ::grpcio::Result<super::regression::RegressionResponse> {
        self.regress_opt(req, ::grpcio::CallOption::default())
    }

    pub fn regress_async_opt(&self, req: &super::regression::RegressionRequest, opt: ::grpcio::CallOption) -> ::grpcio::Result<::grpcio::ClientUnaryReceiver<super::regression::RegressionResponse>> {
        self.client.unary_call_async(&METHOD_PREDICTION_SERVICE_REGRESS, req, opt)
    }

    pub fn regress_async(&self, req: &super::regression::RegressionRequest) -> ::grpcio::Result<::grpcio::ClientUnaryReceiver<super::regression::RegressionResponse>> {
        self.regress_async_opt(req, ::grpcio::CallOption::default())
    }

    pub fn predict_opt(&self, req: &super::predict::PredictRequest, opt: ::grpcio::CallOption) -> ::grpcio::Result<super::predict::PredictResponse> {
        self.client.unary_call(&METHOD_PREDICTION_SERVICE_PREDICT, req, opt)
    }

    pub fn predict(&self, req: &super::predict::PredictRequest) -> ::grpcio::Result<super::predict::PredictResponse> {
        self.predict_opt(req, ::grpcio::CallOption::default())
    }

    pub fn predict_async_opt(&self, req: &super::predict::PredictRequest, opt: ::grpcio::CallOption) -> ::grpcio::Result<::grpcio::ClientUnaryReceiver<super::predict::PredictResponse>> {
        self.client.unary_call_async(&METHOD_PREDICTION_SERVICE_PREDICT, req, opt)
    }

    pub fn predict_async(&self, req: &super::predict::PredictRequest) -> ::grpcio::Result<::grpcio::ClientUnaryReceiver<super::predict::PredictResponse>> {
        self.predict_async_opt(req, ::grpcio::CallOption::default())
    }

    pub fn multi_inference_opt(&self, req: &super::inference::MultiInferenceRequest, opt: ::grpcio::CallOption) -> ::grpcio::Result<super::inference::MultiInferenceResponse> {
        self.client.unary_call(&METHOD_PREDICTION_SERVICE_MULTI_INFERENCE, req, opt)
    }

    pub fn multi_inference(&self, req: &super::inference::MultiInferenceRequest) -> ::grpcio::Result<super::inference::MultiInferenceResponse> {
        self.multi_inference_opt(req, ::grpcio::CallOption::default())
    }

    pub fn multi_inference_async_opt(&self, req: &super::inference::MultiInferenceRequest, opt: ::grpcio::CallOption) -> ::grpcio::Result<::grpcio::ClientUnaryReceiver<super::inference::MultiInferenceResponse>> {
        self.client.unary_call_async(&METHOD_PREDICTION_SERVICE_MULTI_INFERENCE, req, opt)
    }

    pub fn multi_inference_async(&self, req: &super::inference::MultiInferenceRequest) -> ::grpcio::Result<::grpcio::ClientUnaryReceiver<super::inference::MultiInferenceResponse>> {
        self.multi_inference_async_opt(req, ::grpcio::CallOption::default())
    }

    pub fn get_model_metadata_opt(&self, req: &super::get_model_metadata::GetModelMetadataRequest, opt: ::grpcio::CallOption) -> ::grpcio::Result<super::get_model_metadata::GetModelMetadataResponse> {
        self.client.unary_call(&METHOD_PREDICTION_SERVICE_GET_MODEL_METADATA, req, opt)
    }

    pub fn get_model_metadata(&self, req: &super::get_model_metadata::GetModelMetadataRequest) -> ::grpcio::Result<super::get_model_metadata::GetModelMetadataResponse> {
        self.get_model_metadata_opt(req, ::grpcio::CallOption::default())
    }

    pub fn get_model_metadata_async_opt(&self, req: &super::get_model_metadata::GetModelMetadataRequest, opt: ::grpcio::CallOption) -> ::grpcio::Result<::grpcio::ClientUnaryReceiver<super::get_model_metadata::GetModelMetadataResponse>> {
        self.client.unary_call_async(&METHOD_PREDICTION_SERVICE_GET_MODEL_METADATA, req, opt)
    }

    pub fn get_model_metadata_async(&self, req: &super::get_model_metadata::GetModelMetadataRequest) -> ::grpcio::Result<::grpcio::ClientUnaryReceiver<super::get_model_metadata::GetModelMetadataResponse>> {
        self.get_model_metadata_async_opt(req, ::grpcio::CallOption::default())
    }
    pub fn spawn<F>(&self, f: F) where F: ::futures::Future<Output = ()> + Send + 'static {
        self.client.spawn(f)
    }
}

pub trait PredictionService {
    fn classify(&mut self, ctx: ::grpcio::RpcContext, req: super::classification::ClassificationRequest, sink: ::grpcio::UnarySink<super::classification::ClassificationResponse>);
    fn regress(&mut self, ctx: ::grpcio::RpcContext, req: super::regression::RegressionRequest, sink: ::grpcio::UnarySink<super::regression::RegressionResponse>);
    fn predict(&mut self, ctx: ::grpcio::RpcContext, req: super::predict::PredictRequest, sink: ::grpcio::UnarySink<super::predict::PredictResponse>);
    fn multi_inference(&mut self, ctx: ::grpcio::RpcContext, req: super::inference::MultiInferenceRequest, sink: ::grpcio::UnarySink<super::inference::MultiInferenceResponse>);
    fn get_model_metadata(&mut self, ctx: ::grpcio::RpcContext, req: super::get_model_metadata::GetModelMetadataRequest, sink: ::grpcio::UnarySink<super::get_model_metadata::GetModelMetadataResponse>);
}

pub fn create_prediction_service<S: PredictionService + Send + Clone + 'static>(s: S) -> ::grpcio::Service {
    let mut builder = ::grpcio::ServiceBuilder::new();
    let mut instance = s.clone();
    builder = builder.add_unary_handler(&METHOD_PREDICTION_SERVICE_CLASSIFY, move |ctx, req, resp| {
        instance.classify(ctx, req, resp)
    });
    let mut instance = s.clone();
    builder = builder.add_unary_handler(&METHOD_PREDICTION_SERVICE_REGRESS, move |ctx, req, resp| {
        instance.regress(ctx, req, resp)
    });
    let mut instance = s.clone();
    builder = builder.add_unary_handler(&METHOD_PREDICTION_SERVICE_PREDICT, move |ctx, req, resp| {
        instance.predict(ctx, req, resp)
    });
    let mut instance = s.clone();
    builder = builder.add_unary_handler(&METHOD_PREDICTION_SERVICE_MULTI_INFERENCE, move |ctx, req, resp| {
        instance.multi_inference(ctx, req, resp)
    });
    let mut instance = s;
    builder = builder.add_unary_handler(&METHOD_PREDICTION_SERVICE_GET_MODEL_METADATA, move |ctx, req, resp| {
        instance.get_model_metadata(ctx, req, resp)
    });
    builder.build()
}
