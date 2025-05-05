@interface AURemoteMessageChannel : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (id)endpoint;
- (void)onCallRemoteAU:reply:;
- (void)releaseChannel;
- (id)initWithMessageChannel:;
- (void)retainSelfIfRequired;
@end
