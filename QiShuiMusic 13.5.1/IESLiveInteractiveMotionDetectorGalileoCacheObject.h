@interface IESLiveInteractiveMotionDetectorGalileoCacheObject : NSObject
@property (nonatomic) NSString uid;
@property (nonatomic) NSNumber accelerameterThreshold;
@property (nonatomic) NSNumber shakeEndTimeIntervalThreshold;
@property (nonatomic) NSNumber updateTimeInterval;
- (id)accelerameterThreshold;
- (void)setAccelerameterThreshold:;
- (void)setShakeEndTimeIntervalThreshold:;
- (void)setUpdateTimeInterval:;
- (id)shakeEndTimeIntervalThreshold;
- (id)updateTimeInterval;
- (id)uid;
- (void)setUid:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
