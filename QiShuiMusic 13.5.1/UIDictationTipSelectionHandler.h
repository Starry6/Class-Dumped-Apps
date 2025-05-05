@interface UIDictationTipSelectionHandler : NSObject
@property (nonatomic) NSString selectionText;
@property (nonatomic) <UIDictationTipHandlerDelegate> delegate;
- (void)finalizeSelectionTip;
- (void)setDelegate:;
- (void)setSelectionText:;
- (void)signalSelectedText:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (id)selectionText;
@end
