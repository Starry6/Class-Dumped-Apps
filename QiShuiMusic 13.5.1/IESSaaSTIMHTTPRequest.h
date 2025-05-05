@interface IESSaaSTIMHTTPRequest : IESSaaSTIMRequest
@property (nonatomic) NSString logToken;
- (Class)requestSerializer;
- (Class)responseSerializer;
- (id)init;
- (void)send;
- (void).cxx_destruct;
- (id)logToken;
- (void)setLogToken:;
+ (id)callbackQueue;
@end
