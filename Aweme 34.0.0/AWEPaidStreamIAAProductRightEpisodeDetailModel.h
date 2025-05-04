@interface AWEPaidStreamIAAProductRightEpisodeDetailModel : AWEBaseApiModel
@property (nonatomic) NSNumber unlockType;
@property (nonatomic) NSNumber remainedWatchDuration;
@property (nonatomic) NSNumber totalADCount;
@property (nonatomic) NSNumber remainedADCount;
- (id)remainedWatchDuration;
- (id)remainedADCount;
- (void)setRemainedWatchDuration:;
- (id)totalADCount;
- (void)setTotalADCount:;
- (void)setRemainedADCount:;
- (void).cxx_destruct;
- (void)setUnlockType:;
- (id)unlockType;
+ (id)JSONKeyPathsByPropertyKey;
@end
