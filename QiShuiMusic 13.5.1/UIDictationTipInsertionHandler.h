@interface UIDictationTipInsertionHandler : NSObject
@property (nonatomic) NSMutableString insertionText;
@property (nonatomic) UIDelayedAction finalizeAction;
@property (nonatomic) q textRecorderStatus;
@property (nonatomic) <UIDictationTipHandlerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)insertionText;
- (void)setFinalizeAction:;
- (void)setTextRecorderStatus:;
- (void)setDelegate:;
- (void)setInsertionText:;
- (long long)textRecorderStatus;
- (void)finalizeRecordedText;
- (id)delegate;
- (void).cxx_destruct;
- (void)recordDictationTipText:;
- (id)finalizeAction;
- (void)startRecodingText:;
- (id)initWithDelegate:;
- (void)resetHandler;
@end
