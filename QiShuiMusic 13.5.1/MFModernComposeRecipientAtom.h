@interface MFModernComposeRecipientAtom : MFModernAtomView
@property (nonatomic) MFComposeRecipient recipient;
@property (nonatomic) <MFComposeRecipientAtomDelegate> delegate;
- (void)touchesBegan:withEvent:;
- (void)setDelegate:;
- (id)keyCommands;
- (id)delegate;
- (void).cxx_destruct;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (void)touchesCancelled:withEvent:;
- (void)moveLeft:;
- (void)moveRight:;
- (id)recipient;
- (id)initWithFrame:recipient:;
- (id)initWithFrame:recipient:presentationOptions:;
- (void)handleTouchAndHold;
@end
