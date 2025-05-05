@interface UIDictationTipReplacementHandler : NSObject
@property (nonatomic) NSString replacementTargetText;
@property (nonatomic) NSMutableString replacementText;
@property (nonatomic) UIDelayedAction finalizeAction;
@property (nonatomic) q textRecorderStatus;
@property (nonatomic) <UIDictationTipHandlerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setReplacementTargetText:;
- (void)setFinalizeAction:;
- (void)setTextRecorderStatus:;
- (void)setDelegate:;
- (long long)textRecorderStatus;
- (id)replacementText;
- (void)recordDictationTipReplacementText:;
- (void)setReplacementText:;
- (void)finalizeRecordedText;
- (id)delegate;
- (void).cxx_destruct;
- (void)recordDictationTipText:;
- (id)finalizeAction;
- (void)startRecodingText:;
- (id)initWithDelegate:;
- (void)resetHandler;
- (id)replacementTargetText;
- (void)startRecodingReplacementText:;
@end
