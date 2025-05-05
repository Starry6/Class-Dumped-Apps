@interface CNComposeRecipientAtom : CNAtomView
@property (nonatomic) CNComposeRecipient recipient;
@property (nonatomic) <CNComposeRecipientAtomDelegate> delegate;
- (void)touchesBegan:withEvent:;
- (void)setDelegate:;
- (id)keyCommands;
- (id)delegate;
- (void).cxx_destruct;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (void)touchesCancelled:withEvent:;
- (void)setRecipient:;
- (void)moveLeft:;
- (void)moveRight:;
- (id)recipient;
- (id)initWithFrame:recipient:;
- (id)initWithFrame:recipient:presentationOptions:;
- (void)handleTouchAndHold;
- (id)menuConfigurationForChevronButton;
- (void)handleFirstTap;
@end
