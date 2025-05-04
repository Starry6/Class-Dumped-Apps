@interface AWEPluginAnchorCustomImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)task:didEndWithResult:error:;
- (void)applicationTaskAndCommonReadyWithUniqueID:bootManager:isColdBoot:;
- (void)checkNeedSecurityMoneyCheckWithUniqueID:;
- (void)showVideoSceneGuideWithUniqueID:controller:data:;
- (void)showLiveSceneGuideWithUniqueID:controller:data:;
- (void)fetchODRGuideDataWithODRSource:appID:completion:;
- (id)mountedDataWithAnchorData:;
- (id)anchorActionFromAnchorType:;
- (id)appIDFromContent:;
- (void)trackAnchorResult:appID:;
- (void)requestAwemeWithItemID:completion:;
- (void)bdp_anchorButtonDidClick:snapshot:completion:;
- (id)mountedDataWithUniqueID:;
- (void)bdp_getProductInfoWithAnchorData:timeout:completion:;
- (id)bdp_nativeGameAnchorConfigWithSchema:;
- (id)init;
+ (id)sharedPlugin;
+ (void)bootstrapLaunch;
@end
