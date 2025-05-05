@interface AVVoiceTriggerNotificationForwarder : NSObject
@property (nonatomic) <VoiceTriggerNotificationInterface> target;
- (void)voiceTriggerNotification:;
- (void)setTarget:;
- (void)speakerStateChangedNotification:;
- (void).cxx_destruct;
- (id)target;
- (void)speakerMuteStateChangedNotification:;
- (void)siriClientRecordStateChangedNotification:recordingCount:;
@end
