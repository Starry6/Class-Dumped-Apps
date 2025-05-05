@interface CHDefaultHapticDeviceCapability : NSObject
@property (nonatomic) Q maximumNumberOfHapticChannels;
@property (nonatomic) Q maximumNumberOfAudioChannels;
@property (nonatomic) BOOL supportsHaptics;
@property (nonatomic) BOOL supportsAudio;
- (id)init;
- (id)initPrivate;
- (BOOL)supportsAudio;
- (BOOL)supportsHaptics;
- (id)attributesForEventParameter:eventType:error:;
- (id)attributesForDynamicParameter:error:;
- (unsigned long long)maximumNumberOfHapticChannels;
- (unsigned long long)maximumNumberOfAudioChannels;
- (float)maximumValueForEventParameter:;
- (float)minimumValueForEventParameter:;
- (float)defaultValueForEventParameter:eventType:;
- (float)maximumValueForDynamicParameter:;
- (float)minimumValueForDynamicParameter:;
- (float)defaultValueForDynamicParameter:;
@end
