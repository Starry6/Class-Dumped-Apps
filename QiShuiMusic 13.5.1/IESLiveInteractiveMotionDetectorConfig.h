@interface IESLiveInteractiveMotionDetectorConfig : NSObject
@property (nonatomic) IESLiveInteractiveMotionDetectorGalileoAPI api;
@property (nonatomic) double detectTimeInterval;
@property (nonatomic) double accelerameterThreshold;
@property (nonatomic) double shakeEndTimeIntervalThreshold;
@property (nonatomic) double accelerameterThreshold4LinkUser;
@property (nonatomic) double shakeEndTimeIntervalThreshold4LinkUser;
- (double)accelerameterThreshold4LinkUser;
- (double)accelerameterThreshold;
- (double)detectTimeInterval;
- (void)fetchGalileoConfig;
- (id)initWithSettingDict:;
- (void)setAccelerameterThreshold4LinkUser:;
- (void)setAccelerameterThreshold:;
- (void)setDetectTimeInterval:;
- (void)setShakeEndTimeIntervalThreshold4LinkUser:;
- (void)setShakeEndTimeIntervalThreshold:;
- (void)setupGalileo;
- (double)shakeEndTimeIntervalThreshold;
- (double)shakeEndTimeIntervalThreshold4LinkUser;
- (void)updateConfigWithAccelerameterThreshold:shakeEndTimeIntervalThreshold:;
- (void).cxx_destruct;
- (id)api;
- (void)setApi:;
@end
