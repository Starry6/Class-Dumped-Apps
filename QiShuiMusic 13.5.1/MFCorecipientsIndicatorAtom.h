@interface MFCorecipientsIndicatorAtom : MFModernAtomView
@property (nonatomic) <MFCorecipientsIndicatorAtomDelegate> delegate;
@property (nonatomic) NSArray recipients;
- (id)recipients;
- (id)init;
- (void)touchesBegan:withEvent:;
- (void)setRecipients:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (void)touchesCancelled:withEvent:;
- (id)initWithRecipients:;
@end
