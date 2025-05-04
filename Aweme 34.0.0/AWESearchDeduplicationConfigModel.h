@interface AWESearchDeduplicationConfigModel : AWEBaseApiModel
@property (nonatomic) q resultTriggerTime;
@property (nonatomic) q detailTriggerTime;
@property (nonatomic) NSArray deduplicationTargets;
- (long long)resultTriggerTime;
- (void)setResultTriggerTime:;
- (long long)detailTriggerTime;
- (void)setDetailTriggerTime:;
- (void)setDeduplicationTargets:;
- (id)deduplicationTargets;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
