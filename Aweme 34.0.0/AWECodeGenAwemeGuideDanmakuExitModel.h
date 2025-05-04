@interface AWECodeGenAwemeGuideDanmakuExitModel : AWEBaseDataModel
@property (nonatomic) q showCount;
@property (nonatomic) q requireUserClick;
@property (nonatomic) q timePeriod;
@property (nonatomic) q showCountFrequency;
@property (nonatomic) q timePeriodFrequency;
- (long long)showCountFrequency;
- (long long)timePeriodFrequency;
- (long long)requireUserClick;
- (void)setRequireUserClick:;
- (void)setShowCountFrequency:;
- (void)setTimePeriodFrequency:;
- (void)setTimePeriod:;
- (long long)timePeriod;
- (void)setShowCount:;
- (long long)showCount;
+ (id)JSONKeyPathsByPropertyKey;
@end
