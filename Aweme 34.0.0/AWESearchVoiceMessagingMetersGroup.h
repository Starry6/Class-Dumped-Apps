@interface AWESearchVoiceMessagingMetersGroup : NSObject
@property (nonatomic) q peakIndex;
@property (nonatomic) double targetValue;
@property (nonatomic) q frameCount;
@property (nonatomic) q meterCount;
@property (nonatomic) NSArray meters;
@property (nonatomic) NSArray values;
- (void)setMeters:;
- (long long)peakIndex;
- (long long)generateRandomBase:exclude:;
- (void)setPeakIndex:;
- (double)generateRandomFrom:to:;
- (void)updateMeterTarget:;
- (long long)meterCount;
- (void)setMeterCount:;
- (id)initWithCount:;
- (void)setTargetValue:;
- (id)values;
- (void)setValues:;
- (id)meters;
- (void).cxx_destruct;
- (double)targetValue;
- (long long)frameCount;
- (void)setFrameCount:;
- (void)updateValue;
- (void)updateTarget:;
@end
