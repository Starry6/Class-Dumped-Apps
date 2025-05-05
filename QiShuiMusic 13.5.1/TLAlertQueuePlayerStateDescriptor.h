@interface TLAlertQueuePlayerStateDescriptor : NSObject
@property (nonatomic) TLAlert playingAlert;
@property (nonatomic) @? playingAlertCompletionHandler;
@property (nonatomic) BOOL alertActivationAssertionAcquired;
@property (nonatomic) TLAlert alertForAudioEnvironmentSetup;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id)_descriptionForDebugging:;
- (id)initWithPlayingAlert:completionHandler:previousStateDescriptor:;
- (id)stateDescriptorForCompletedPlayback;
- (id)initForAcquiringActivationAssertionWithAlertForAudioEnvironmentSetup:previousStateDescriptor:;
- (id)stateDescriptorByRelinquishingActivationAssertion;
- (id)_initForRelinquishingActivationAssertionWithAlertForAudioEnvironmentSetup:previousStateDescriptor:;
- (void)_transferPlayingAlertAndCompletionHandlerFromPreviousStateDescriptor:;
- (void)invokePlayingAlertCompletionHandlerWithPlaybackCompletionType:error:;
- (BOOL)isAlertActivationAssertionAcquired;
- (void)setAlertActivationAssertionAcquired:;
- (id)playingAlert;
- (id)playingAlertCompletionHandler;
- (id)alertForAudioEnvironmentSetup;
- (void)setAlertForAudioEnvironmentSetup:;
@end
