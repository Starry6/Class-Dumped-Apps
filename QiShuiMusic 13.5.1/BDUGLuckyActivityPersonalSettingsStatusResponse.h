@interface BDUGLuckyActivityPersonalSettingsStatusResponse : BDUGLuckyActivityStageBaseResponse
@property (nonatomic) q personalSettingsStatus;
@property (nonatomic) double recordTime;
- (long long)personalSettingsStatus;
- (double)recordTime;
- (void)setPersonalSettingsStatus:;
- (void)setRecordTime:;
@end
