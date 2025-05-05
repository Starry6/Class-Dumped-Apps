@interface AVAudioTime : NSObject
@property (nonatomic) BOOL hostTimeValid;
@property (nonatomic) Q hostTime;
@property (nonatomic) BOOL sampleTimeValid;
@property (nonatomic) q sampleTime;
@property (nonatomic) double sampleRate;
@property (nonatomic) {AudioTimeStamp=dQdQ{SMPTETime=ssIIIssss}II} audioTimeStamp;
- (id)init;
- (double)sampleRate;
- (id)initWithHostTime:;
- (id)initWithSampleTime:atRate:;
- (id)audioTimeStamp;
- (BOOL)isHostTimeValid;
- (long long)sampleTime;
- (id)description;
- (id)extrapolateTimeFromAnchor:;
- (BOOL)isSampleTimeValid;
- (id)initWithHostTime:sampleTime:atRate:;
- (unsigned long long)hostTime;
- (id)initWithAudioTimeStamp:sampleRate:;
+ (id)timeWithAudioTimeStamp:sampleRate:;
+ (id)timeWithSampleTime:atRate:;
+ (double)secondsForHostTime:;
+ (unsigned long long)hostTimeForSeconds:;
+ (id)timeWithHostTime:sampleTime:atRate:;
+ (id)timeWithHostTime:;
@end
