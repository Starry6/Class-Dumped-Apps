@interface AWEMusicStreamingImpl.LunaActivityFreeVip : AWEMusicStreamingImpl.LunaBaseApiModel
@property (nonatomic) NSString startDate;
@property (nonatomic) NSString endDate;
@property (nonatomic) q appliedCount;
@property (nonatomic) NSString latestApplyDate;
- (long long)appliedCount;
- (void)setAppliedCount:;
- (id)latestApplyDate;
- (void)setLatestApplyDate:;
- (void)setEndDate:;
- (id)initWithDictionary:error:;
- (id)startDate;
- (id)init;
- (void)setStartDate:;
- (void).cxx_destruct;
- (id)endDate;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
