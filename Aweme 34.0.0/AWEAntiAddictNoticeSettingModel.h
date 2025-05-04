@interface AWEAntiAddictNoticeSettingModel : MTLModel
@property (nonatomic) double antiAddictionDayTime;
@property (nonatomic) double antiAddictionNightTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)timeLockInterval;
- (double)antiAddictionDayTime;
- (double)antiAddictionNightTime;
- (void)setAntiAddictionDayTime:;
- (void)setAntiAddictionNightTime:;
- (long long)remindToRestTime;
- (long long)remindToSleepTime;
- (BOOL)timeLockEnabled;
+ (BOOL)enableAntiAddict;
+ (id)JSONKeyPathsByPropertyKey;
@end
