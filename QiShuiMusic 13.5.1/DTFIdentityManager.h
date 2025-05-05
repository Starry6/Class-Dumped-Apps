@interface DTFIdentityManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initSDK;
- (id)getMetaInfo;
- (void)initIPv6;
- (void)preload:completion:;
- (void)setDataProtocolVersion:;
- (void)setRpcProxy:;
- (void)verifyWith:extParams:onCompletion:;
- (id)getVersion;
+ (id)sharedInstance;
@end
