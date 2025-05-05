@interface OspreyMethodCall : NSObject
- (void).cxx_destruct;
- (id)initWithMethodName:channel:serializeRequest:deserializeResponse:defaultRequestBuilder:;
- (id)callWithMessageReceived:completion:;
- (id)callWithRequestBuilder:messageReceived:completion:;
@end
