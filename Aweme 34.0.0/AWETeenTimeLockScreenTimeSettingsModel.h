@interface AWETeenTimeLockScreenTimeSettingsModel : AWEBaseApiModel
@property (nonatomic) q weekdayTime;
@property (nonatomic) q weekendTime;
- (long long)weekdayTime;
- (long long)weekendTime;
- (void)setWeekdayTime:;
- (void)setWeekendTime:;
+ (id)JSONKeyPathsByPropertyKey;
@end
