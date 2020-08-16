// This file is generated. Do not edit
// @generated

// https://github.com/Manishearth/rust-clippy/issues/702
#![allow(unknown_lints)]
#![allow(clippy::all)]

#![cfg_attr(rustfmt, rustfmt_skip)]

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

const METHOD_MODEL_SERVICE_GET_MODEL_STATUS: ::grpcio::Method<super::get_model_status::GetModelStatusRequest, super::get_model_status::GetModelStatusResponse> = ::grpcio::Method {
    ty: ::grpcio::MethodType::Unary,
    name: "/tensorflow.serving.ModelService/GetModelStatus",
    req_mar: ::grpcio::Marshaller { ser: ::grpcio::pb_ser, de: ::grpcio::pb_de },
    resp_mar: ::grpcio::Marshaller { ser: ::grpcio::pb_ser, de: ::grpcio::pb_de },
};

const METHOD_MODEL_SERVICE_HANDLE_RELOAD_CONFIG_REQUEST: ::grpcio::Method<super::model_management::ReloadConfigRequest, super::model_management::ReloadConfigResponse> = ::grpcio::Method {
    ty: ::grpcio::MethodType::Unary,
    name: "/tensorflow.serving.ModelService/HandleReloadConfigRequest",
    req_mar: ::grpcio::Marshaller { ser: ::grpcio::pb_ser, de: ::grpcio::pb_de },
    resp_mar: ::grpcio::Marshaller { ser: ::grpcio::pb_ser, de: ::grpcio::pb_de },
};

#[derive(Clone)]
pub struct ModelServiceClient {
    client: ::grpcio::Client,
}

impl ModelServiceClient {
    pub fn new(channel: ::grpcio::Channel) -> Self {
        ModelServiceClient {
            client: ::grpcio::Client::new(channel),
        }
    }

    pub fn get_model_status_opt(&self, req: &super::get_model_status::GetModelStatusRequest, opt: ::grpcio::CallOption) -> ::grpcio::Result<super::get_model_status::GetModelStatusResponse> {
        self.client.unary_call(&METHOD_MODEL_SERVICE_GET_MODEL_STATUS, req, opt)
    }

    pub fn get_model_status(&self, req: &super::get_model_status::GetModelStatusRequest) -> ::grpcio::Result<super::get_model_status::GetModelStatusResponse> {
        self.get_model_status_opt(req, ::grpcio::CallOption::default())
    }

    pub fn get_model_status_async_opt(&self, req: &super::get_model_status::GetModelStatusRequest, opt: ::grpcio::CallOption) -> ::grpcio::Result<::grpcio::ClientUnaryReceiver<super::get_model_status::GetModelStatusResponse>> {
        self.client.unary_call_async(&METHOD_MODEL_SERVICE_GET_MODEL_STATUS, req, opt)
    }

    pub fn get_model_status_async(&self, req: &super::get_model_status::GetModelStatusRequest) -> ::grpcio::Result<::grpcio::ClientUnaryReceiver<super::get_model_status::GetModelStatusResponse>> {
        self.get_model_status_async_opt(req, ::grpcio::CallOption::default())
    }

    pub fn handle_reload_config_request_opt(&self, req: &super::model_management::ReloadConfigRequest, opt: ::grpcio::CallOption) -> ::grpcio::Result<super::model_management::ReloadConfigResponse> {
        self.client.unary_call(&METHOD_MODEL_SERVICE_HANDLE_RELOAD_CONFIG_REQUEST, req, opt)
    }

    pub fn handle_reload_config_request(&self, req: &super::model_management::ReloadConfigRequest) -> ::grpcio::Result<super::model_management::ReloadConfigResponse> {
        self.handle_reload_config_request_opt(req, ::grpcio::CallOption::default())
    }

    pub fn handle_reload_config_request_async_opt(&self, req: &super::model_management::ReloadConfigRequest, opt: ::grpcio::CallOption) -> ::grpcio::Result<::grpcio::ClientUnaryReceiver<super::model_management::ReloadConfigResponse>> {
        self.client.unary_call_async(&METHOD_MODEL_SERVICE_HANDLE_RELOAD_CONFIG_REQUEST, req, opt)
    }

    pub fn handle_reload_config_request_async(&self, req: &super::model_management::ReloadConfigRequest) -> ::grpcio::Result<::grpcio::ClientUnaryReceiver<super::model_management::ReloadConfigResponse>> {
        self.handle_reload_config_request_async_opt(req, ::grpcio::CallOption::default())
    }
    pub fn spawn<F>(&self, f: F) where F: ::futures::Future<Output = ()> + Send + 'static {
        self.client.spawn(f)
    }
}

pub trait ModelService {
    fn get_model_status(&mut self, ctx: ::grpcio::RpcContext, req: super::get_model_status::GetModelStatusRequest, sink: ::grpcio::UnarySink<super::get_model_status::GetModelStatusResponse>);
    fn handle_reload_config_request(&mut self, ctx: ::grpcio::RpcContext, req: super::model_management::ReloadConfigRequest, sink: ::grpcio::UnarySink<super::model_management::ReloadConfigResponse>);
}

pub fn create_model_service<S: ModelService + Send + Clone + 'static>(s: S) -> ::grpcio::Service {
    let mut builder = ::grpcio::ServiceBuilder::new();
    let mut instance = s.clone();
    builder = builder.add_unary_handler(&METHOD_MODEL_SERVICE_GET_MODEL_STATUS, move |ctx, req, resp| {
        instance.get_model_status(ctx, req, resp)
    });
    let mut instance = s;
    builder = builder.add_unary_handler(&METHOD_MODEL_SERVICE_HANDLE_RELOAD_CONFIG_REQUEST, move |ctx, req, resp| {
        instance.handle_reload_config_request(ctx, req, resp)
    });
    builder.build()
}
