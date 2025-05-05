@interface IESLiveAssetExpireStrategy : NSObject
@property (nonatomic) q assetExpireDuration;
@property (nonatomic) q assetRemoveOnceCount;
@property (nonatomic) q cleanInterval;
@property (nonatomic) q lastCleanTime;
@property (nonatomic) <IESLiveEffectCleanDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)assetExpireDuration;
- (long long)assetRemoveOnceCount;
- (long long)cleanInterval;
- (long long)handleTrimEffectMoment;
- (void)handleTrimEffectWithContext:;
- (long long)lastCleanTime;
- (void)setAssetExpireDuration:;
- (void)setAssetRemoveOnceCount:;
- (void)setCleanInterval:;
- (void)setLastCleanTime:;
- (id)init;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
@end
