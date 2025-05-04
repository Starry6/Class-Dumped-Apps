@interface AWEIMMessageBottomQuickReplyTextView : UIView
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIView contentView;
@property (nonatomic) @? tapAction;
- (void)p_addGesture;
- (void)p_addSubviews;
- (void)updateWithProps:;
- (void)p_addConstraint;
- (void)p_onTapAction;
- (id)textLabel;
- (id)initWithFrame:;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setTextLabel:;
- (id)tapAction;
- (void)setTapAction:;
@end
