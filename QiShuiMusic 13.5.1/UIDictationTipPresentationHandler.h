@interface UIDictationTipPresentationHandler : NSObject
@property (nonatomic) q dictationTipSignaled;
@property (nonatomic) BOOL tipPresentedInCurrentDictationSession;
@property (nonatomic) BOOL isShowingTip;
- (id)init;
- (long long)getDictationTipSignaled;
- (long long)dictationTipDisplayCount:;
- (void)setIsShowingTip:;
- (BOOL)tipPresentedInCurrentDictationSession;
- (void)setDictationTipSignaled:;
- (BOOL)isShowingTip;
- (BOOL)dictationReplacementTipShown;
- (BOOL)dictationInsertionTipShown;
- (BOOL)dictationTipShownOverLimit:;
- (BOOL)dictationDeletionTipShown;
- (long long)dictationTipSignaled;
- (void)setTipPresentedInCurrentDictationSession:;
- (BOOL)dictationModelessInputTipShown;
- (BOOL)tipShownLastDay;
- (BOOL)dictationEmojiTipShown;
- (void)signalTipPresentedInCurrentDictationSession;
- (void)resetDictationTipSignal;
- (void)resetHandler;
- (BOOL)dictationStopTipShown;
- (BOOL)dictationCommandTipsEnabled;
- (BOOL)dictationSelectionTipShown;
- (BOOL)shouldSignalDictationTip:;
@end
