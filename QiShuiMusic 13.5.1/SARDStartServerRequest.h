@interface SARDStartServerRequest : SAStartRequest
@property (nonatomic) NSString audioDestination;
@property (nonatomic) NSString audioSource;
@property (nonatomic) NSArray bargeInModes;
@property (nonatomic) NSString deviceModel;
@property (nonatomic) NSNumber durationSincePreviousTTSFinish;
@property (nonatomic) NSNumber durationSincePreviousTTSStart;
@property (nonatomic) BOOL textRequest;
@property (nonatomic) NSDictionary voiceTriggerEventInfo;
- (id)deviceModel;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setDeviceModel:;
- (id)audioSource;
- (void)setAudioSource:;
- (id)voiceTriggerEventInfo;
- (void)setVoiceTriggerEventInfo:;
- (id)audioDestination;
- (void)setAudioDestination:;
- (id)bargeInModes;
- (void)setBargeInModes:;
- (id)durationSincePreviousTTSFinish;
- (void)setDurationSincePreviousTTSFinish:;
- (id)durationSincePreviousTTSStart;
- (void)setDurationSincePreviousTTSStart:;
- (BOOL)textRequest;
- (void)setTextRequest:;
@end
