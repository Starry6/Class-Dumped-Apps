@interface SignpostSupportMachTimeTranslationRange : NSObject
@property (nonatomic) Q startMachAbsoluteTime;
@property (nonatomic) Q endMachAbsoluteTime;
@property (nonatomic) Q startMachContinuousTime;
@property (nonatomic) Q endMachContinuousTime;
@property (nonatomic) q absoluteMinusContinuousDelta;
@property (nonatomic) q continuousMinusAbsoluteDelta;
@property (nonatomic) Q machContinuousTimeDuration;
- (unsigned long long)startMachContinuousTime;
- (id)debugDescription;
- (unsigned long long)endMachContinuousTime;
- (id)initWithArrayRepresentation:;
- (BOOL)isEqual:;
- (unsigned long long)machContinuousTimeDuration;
- (long long)absoluteMinusContinuousDelta;
- (long long)continuousMinusAbsoluteDelta;
- (BOOL)setEndMachAbsoluteTimestamp:endMachContinuousTime:;
- (BOOL)containsMachAbsoluteTime:;
- (BOOL)containsMachContinuousTime:;
- (unsigned long long)machAbsoluteTimeForMachContinuousTime:;
- (unsigned long long)machContinuousTimeForMachAbsoluteTime:;
- (id)initWithStartMachAbsoluteTime:startContinuousTime:;
- (id)serializableArrayRepresentation;
- (unsigned long long)startMachAbsoluteTime;
- (unsigned long long)endMachAbsoluteTime;
@end
