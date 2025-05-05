@interface STComment.CommentTextView : UITextView
@property (nonatomic) NSAttributedString attributedText;
@property (nonatomic) UITextRange selectedTextRange;
- (void)setAttributedText:;
- (void)setSelectedTextRange:;
- (void)deleteBackward;
- (id)initWithCoder:;
- (id)selectedTextRange;
- (void)cut:;
- (void)copy:;
- (void).cxx_destruct;
- (void)paste:;
- (id)attributedText;
- (id)initWithFrame:textContainer:;
@end
