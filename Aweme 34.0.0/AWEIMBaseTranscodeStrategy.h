@interface AWEIMBaseTranscodeStrategy : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isStrategyOptimizeEnable;
- (BOOL)isStrategyRemuxOptimizeEnable;
- (double)p_remuxBitrateLimit;
- (double)remuxSizeWidthLimit;
- (double)remuxSizeHeightLimit;
- (id)p_getRemuxBitrateLimitJson;
- (BOOL)p_getForceTranscodeWithSize:;
- (void)transAVAsset:processCallback:dataCallback:complete:;
- (void)p_pushCommonSettingIntoHTS:asset:;
- (void)p_pushRemuxSettingIntoHTS:videoTrack:;
- (void)p_pushTrasncodeOptSettingIntoVideoData:asset:videoTrack:;
- (BOOL)p_VECompileReady;
- (void)p_callVEBusyComplete:;
- (double)normalBitrateLimit;
- (double)originalBitrateLimit;
- (double)originalFpsLimit;
- (id)init;
@end
