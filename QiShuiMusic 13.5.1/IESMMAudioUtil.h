@interface IESMMAudioUtil : NSObject
+ (id)rawFloatDataFromAudioBuffer:numberOfChannels:samplesPerChannel:;
+ (BOOL)convertFloatDataWithAudioBuffer:inAudioBuffer:;
+ (void)convertIntDataForAudioBuffer:inAudioData:numberOfChannels:samplesPerChannel:;
+ (id)rawFloatDataFromFloatAudioBuffer:numberOfChannels:samplesPerChannel:;
+ (void)updateAudioBuffer:withRawFloatData:numberOfChannels:samplesPerChannel:;
@end
