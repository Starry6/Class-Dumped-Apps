@interface BDUGLuckyPollingSettingsMeta : BDUGLuckyBDModel
@property (nonatomic) double pollingInterval;
@property (nonatomic) double startTimeMs;
@property (nonatomic) double endTimeMs;
@property (nonatomic) q version;
- (double)endTimeMs;
- (void)setEndTimeMs:;
- (void)setVersion:;
- (long long)version;
- (double)pollingInterval;
- (double)startTimeMs;
- (void)setStartTimeMs:;
- (void)setPollingInterval:;
+ (id)modelCustomPropertyMapper;
@end
