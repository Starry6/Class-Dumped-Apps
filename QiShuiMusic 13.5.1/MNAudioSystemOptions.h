@interface MNAudioSystemOptions : NSObject
@property (nonatomic) Q drivingVoiceGuidanceLevel;
@property (nonatomic) Q walkingVoiceGuidanceLevel;
@property (nonatomic) Q cyclingVoiceGuidanceLevel;
@property (nonatomic) BOOL useHFP;
@property (nonatomic) BOOL pauseSpokenAudio;
@property (nonatomic) BOOL chimeBeforeInstruction;
@property (nonatomic) BOOL muteSpeechOverride;
- (unsigned long long)drivingVoiceGuidanceLevel;
- (BOOL)useHFP;
- (id)description;
- (BOOL)muteSpeechOverride;
- (BOOL)pauseSpokenAudio;
- (unsigned long long)cyclingVoiceGuidanceLevel;
- (unsigned long long)walkingVoiceGuidanceLevel;
- (BOOL)chimeBeforeInstruction;
- (id)copyWithZone:;
- (id)initWithDrivingVoiceGuidanceLevel:andWalkingVoiceGuidanceLevel:andCyclingVoiceGuidanceLevel:andUseHFP:andPauseSpokenAudio:andChimeBeforeInstruction:andMuteSpeechOverride:;
@end
