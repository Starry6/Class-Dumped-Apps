@interface UIDictationTipModelessInputHandler : NSObject
@property (nonatomic) <UIDictationTipHandlerDelegate> delegate;
@property (nonatomic) BOOL modelessInputTipDictationStoppedSignal;
@property (nonatomic) BOOL softwareKeyboardInteractionAfterDictationStoppedSignal;
@property (nonatomic) BOOL shouldAttemptToShowModelessTip;
- (BOOL)shouldShowModelessInputTip;
- (BOOL)shouldAttemptToShowModelessTip;
- (BOOL)softwareKeyboardInteractionAfterDictationStoppedSignal;
- (void)setDelegate:;
- (void)triggerAttemptToShowModelessTipFlag;
- (BOOL)modelessInputTipDictationStoppedSignal;
- (void)setSoftwareKeyboardInteractionAfterDictationStoppedSignal:;
- (id)delegate;
- (void)processUserInteractionEnded;
- (void).cxx_destruct;
- (void)showModelessInputTip;
- (id)initWithDelegate:;
- (void)userInteractionEndedDuringModelessInputTipDictationStoppedSignal;
- (void)setModelessInputTipDictationStoppedSignal:;
- (void)setShouldAttemptToShowModelessTip:;
- (void)processSoftwareKeyboardInteraction;
- (void)resetDictationTipModelessHandlerSignalFlags;
@end
