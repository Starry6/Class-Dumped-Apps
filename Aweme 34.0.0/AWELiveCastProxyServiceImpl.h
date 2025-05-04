@interface AWELiveCastProxyServiceImpl : NSObject
@property (nonatomic) CastProxyConfiguration config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isCastProxyURL:;
- (void)getResolutionDimensions:targetWidth:targetHeight:;
- (void)logWithSDKMessage:level:;
- (void)onEventWithName:params:;
- (void)onVerboseWithMessage:;
- (void)onDebugWithMessage:;
- (void)onInfoWithMessage:;
- (void)onWarnWithMessage:;
- (void)onErrorWithMessage:;
- (BOOL)enableCastProxy;
- (BOOL)enableTopSpeedCast;
- (BOOL)enableVerifyCastProxyInNormalRoom;
- (id)fetchProxyURLWithOriginalURL:token:deviceIP:;
- (id)fetchProxyURLWithOriginalURL:token:deviceIP:outputResolution:;
- (id)fetchProxyURLWithOriginalURLs:token:deviceIP:;
- (void)castDidFinish;
- (void)setConfig:;
- (id)config;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
