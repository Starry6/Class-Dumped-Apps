@interface IMTipKitEventReporter : NSObject
- (void)sendSavePhotoEvent;
- (void)sendVoiceMessageAppOpenedEvent;
- (void)sendTapbackSendEvent;
- (void)sendReceivedPhotoEvent;
- (void)sendSentMessageEvent;
- (void)sendSetNameAndPhotoProfileEvent;
- (void)sendBiomeSignal:;
- (void)sendCoreAnalyticsSilverEvent:;
+ (id)sharedInstance;
@end
