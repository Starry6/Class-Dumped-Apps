@interface HapticCommandConverter : NSObject
@property (nonatomic) HapticServerConfig serverConfig;
- (id)serverConfig;
- (void).cxx_destruct;
- (id)initWithServerConfig:;
- (id)eventForAudioEventType:time:eventParams:duration:;
- (unsigned long long)transientHapticEventTypeFromSharpness:;
- (unsigned long long)transientHapticEventTypeForDefaultSharpness;
- (id)eventForTransientHapticAtTime:params:duration:;
- (id)eventForLegacyTransientHapticAtTime:params:duration:;
- (unsigned long long)continuousHapticEventTypeFromSharpness:sustained:;
- (unsigned long long)continuousHapticEventTypeForDefaultSharpness:;
- (id)eventForContinuousHapticEventType:time:params:duration:;
- (id)eventForSPIEventType:time:eventParams:duration:;
- (id)eventForEventEntry:engine:privileged:;
- (id)eventForDynamicParameterEntry:;
- (id)eventForParameterCurveEntry:;
- (id)CHtoAVParameterCurve:;
@end
