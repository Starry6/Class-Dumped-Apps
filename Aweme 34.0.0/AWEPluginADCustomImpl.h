@interface AWEPluginADCustomImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)adTaskManagerRunTasksWithParam:;
- (BOOL)p_jumpLiveRoomWithDrawAdModel:;
- (void)p_cardClickWithDrawModel:params:isNativeClick:componentType:;
- (void)sendClickTrackWithAdModel:;
- (void)p_jumpLandingPageWithDrawAdModel:params:isNativeClick:componentType:;
- (id)p_generateFakeAwemeModelWithAdModel:;
- (id)p_enterLiveRoomSchemaWithDrawAdModel:;
- (void)bdp_bannerAdDidClickWithParam:;
- (void)bdp_videoAdDidClickBannerWithParam:;
- (void)bdp_videoAdDidClickButtonWithParam:;
- (void)bdp_interstitialAdDidClickBannerWithParam:;
- (void)bdp_interstitialAdDidClickButtonWithParam:;
- (long long)bdp_currentHostForAd;
- (id)bdp_dictionaryForKeyPath:defaultValue:;
- (void)bdp_drawCardAdClickWithAdModel:adParams:isNativeClick:componentType:;
- (void)bdp_drawAdJumpLiveWithAdModel:;
+ (id)sharedPlugin;
@end
