@interface AWECodeGenAllowRecordTimeScopeModel : AWEBaseDataModel
@property (nonatomic) q startTime;
@property (nonatomic) q endTime;
- (void)setStartTime:;
- (long long)endTime;
- (void)setEndTime:;
- (long long)startTime;
+ (id)JSONKeyPathsByPropertyKey;
@end
