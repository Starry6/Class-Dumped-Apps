@interface ICMachineDataOperation : ICAsyncOperation
@property (nonatomic) NSData data;
@property (nonatomic) ICStoreRequestContext requestContext;
@property (nonatomic) q protocolVersion;
@property (nonatomic) @? completionHandler;
- (long long)protocolVersion;
- (void)setProtocolVersion:;
- (id)data;
- (void)setCompletionHandler:;
- (void)setRequestContext:;
- (id)requestContext;
- (void).cxx_destruct;
- (void)setData:;
- (id)completionHandler;
@end
