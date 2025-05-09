@interface IESLiveEffectsDownloadOptimizeStrategyConfig : NSObject
@property (nonatomic) BOOL assetCleanStrategyEnable;
@property (nonatomic) BOOL assetPortraitCleanStrategyEnable;
@property (nonatomic) q assetCleanMaxDeleteCount;
@property (nonatomic) double assetCleanGapInterval;
@property (nonatomic) double assetCleanStartTimeAfterExitRoom;
@property (nonatomic) double assetKeepLiveDuration;
@property (nonatomic) q giftDisplayImmediatelyPolicyType;
@property (nonatomic) NSDictionary displayImmediatelyConfig;
@property (nonatomic) BOOL isGiftItemOpt;
- (id)liveEffectDownloadOptimizeGiftDisplayImmediatelyPartlyGiftRange;
- (double)assetCleanGapInterval;
- (long long)assetCleanMaxDeleteCount;
- (double)assetCleanStartTimeAfterExitRoom;
- (BOOL)assetCleanStrategyEnable;
- (double)assetKeepLiveDuration;
- (BOOL)assetPortraitCleanStrategyEnable;
- (id)displayImmediatelyConfig;
- (long long)giftDisplayImmediatelyPolicyType;
- (BOOL)isGiftItemOpt;
- (BOOL)liveEffectDownloadOptimizeGiftDisplayImmediatelyAllTabExceptPropertyEnable;
- (BOOL)liveEffectDownloadOptimizeGiftDisplayImmediatelyFullEnable;
- (BOOL)liveEffectDownloadOptimizeGiftDisplayImmediatelyPartlyEnable;
- (BOOL)liveEffectDownloadOptimizeUseGiftDisplayPriority;
- (void)setAssetCleanGapInterval:;
- (void)setAssetCleanMaxDeleteCount:;
- (void)setAssetCleanStartTimeAfterExitRoom:;
- (void)setAssetCleanStrategyEnable:;
- (void)setAssetKeepLiveDuration:;
- (void)setAssetPortraitCleanStrategyEnable:;
- (void)setDisplayImmediatelyConfig:;
- (void)setGiftDisplayImmediatelyPolicyType:;
- (void)setIsGiftItemOpt:;
- (id)init;
- (void).cxx_destruct;
@end
