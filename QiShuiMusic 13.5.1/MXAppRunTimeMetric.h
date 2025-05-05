@interface MXAppRunTimeMetric : MXMetric
@property (nonatomic) NSMeasurement cumulativeForegroundTime;
@property (nonatomic) NSMeasurement cumulativeBackgroundTime;
@property (nonatomic) NSMeasurement cumulativeBackgroundAudioTime;
@property (nonatomic) NSMeasurement cumulativeBackgroundLocationTime;
- (id)toDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCumulativeForegroundTimeMeasurement:cumulativeBackgroundTimeMeasurement:cumulativeBackgroundAudioTimeMeasurement:cumulativeBackgroundLocationTimeMeasurement:;
- (id)cumulativeForegroundTime;
- (id)cumulativeBackgroundTime;
- (id)cumulativeBackgroundAudioTime;
- (id)cumulativeBackgroundLocationTime;
+ (BOOL)supportsSecureCoding;
@end
