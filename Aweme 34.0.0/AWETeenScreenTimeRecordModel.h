@interface AWETeenScreenTimeRecordModel : AWEBaseApiModel
@property (nonatomic) NSNumber totalDuration;
@property (nonatomic) q weekdayTime;
@property (nonatomic) q weekendTime;
- (long long)weekdayTime;
- (long long)weekendTime;
- (void)setWeekdayTime:;
- (void)setWeekendTime:;
- (id)totalDuration;
- (void).cxx_destruct;
- (void)setTotalDuration:;
+ (id)JSONKeyPathsByPropertyKey;
@end
