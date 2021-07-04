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

const METHOD_SESSION_SERVICE_SESSION_RUN: ::grpcio::Method<super::session_service::SessionRunRequest, super::session_service::SessionRunResponse> = ::grpcio::Method {
    ty: ::grpcio::MethodType::Unary,
    name: "/tensorflow.serving.SessionService/SessionRun",
    req_mar: ::grpcio::Marshaller { ser: ::grpcio::pb_ser, de: ::grpcio::pb_de },
    resp_mar: ::grpcio::Marshaller { ser: ::grpcio::pb_ser, de: ::grpcio::pb_de },
};

#[derive(Clone)]
pub struct SessionServiceClient {
    client: ::grpcio::Client,
}

impl SessionServiceClient {
    pub fn new(channel: ::grpcio::Channel) -> Self {
        SessionServiceClient {
            client: ::grpcio::Client::new(channel),
        }
    }

    pub fn session_run_opt(&self, req: &super::session_service::SessionRunRequest, opt: ::grpcio::CallOption) -> ::grpcio::Result<super::session_service::SessionRunResponse> {
        self.client.unary_call(&METHOD_SESSION_SERVICE_SESSION_RUN, req, opt)
    }

    pub fn session_run(&self, req: &super::session_service::SessionRunRequest) -> ::grpcio::Result<super::session_service::SessionRunResponse> {
        self.session_run_opt(req, ::grpcio::CallOption::default())
    }

    pub fn session_run_async_opt(&self, req: &super::session_service::SessionRunRequest, opt: ::grpcio::CallOption) -> ::grpcio::Result<::grpcio::ClientUnaryReceiver<super::session_service::SessionRunResponse>> {
        self.client.unary_call_async(&METHOD_SESSION_SERVICE_SESSION_RUN, req, opt)
    }

    pub fn session_run_async(&self, req: &super::session_service::SessionRunRequest) -> ::grpcio::Result<::grpcio::ClientUnaryReceiver<super::session_service::SessionRunResponse>> {
        self.session_run_async_opt(req, ::grpcio::CallOption::default())
    }
    pub fn spawn<F>(&self, f: F) where F: ::futures::Future<Output = ()> + Send + 'static {
        self.client.spawn(f)
    }
}

pub trait SessionService {
    fn session_run(&mut self, ctx: ::grpcio::RpcContext, req: super::session_service::SessionRunRequest, sink: ::grpcio::UnarySink<super::session_service::SessionRunResponse>);
}

pub fn create_session_service<S: SessionService + Send + Clone + 'static>(s: S) -> ::grpcio::Service {
    let mut builder = ::grpcio::ServiceBuilder::new();
    let mut instance = s;
    builder = builder.add_unary_handler(&METHOD_SESSION_SERVICE_SESSION_RUN, move |ctx, req, resp| {
        instance.session_run(ctx, req, resp)
    });
    builder.build()
}
