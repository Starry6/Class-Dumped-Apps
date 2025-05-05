@interface OspreyRPCPromise : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)serverStreamingRequestWithMethodName:requestData:requestBuilder:streamingResponseHandler:completion:;
- (void)fulfill:;
- (id)initWithFulfillmentQueue:;
- (void)unaryRequestWithMethodName:requestData:requestBuilder:responseHandler:;
- (id)clientStreamingRequestWithMethodName:requestBuilder:responseHandler:;
- (id)bidirectionalStreamingRequestWithMethodName:requestBuilder:streamingResponseHandler:completion:;
@end
