@interface IESLiveOfflineAssetCleanStrategy : NSObject
@property (nonatomic) NSDate lastDeleteInvalidCacheWithGiftListDate;
@property (nonatomic) double deleteInvalidCacheWithGiftListTimeInterval;
@property (nonatomic) <IESLiveEffectCleanDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)deleteInvalidCacheWithGiftListTimeInterval;
- (long long)handleTrimEffectMoment;
- (void)handleTrimEffectWithContext:;
- (id)lastDeleteInvalidCacheWithGiftListDate;
- (void)setDeleteInvalidCacheWithGiftListTimeInterval:;
- (void)setLastDeleteInvalidCacheWithGiftListDate:;
- (id)init;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
@end
