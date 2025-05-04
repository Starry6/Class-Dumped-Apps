@interface AWEIMLightInteractionReplyButton : IESIMButton
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) @? tapAction;
- (void)p_setupUI;
- (void)p_didTappedAction;
- (id)initWithTapAction;
- (void)updateWithURL:placeholder:title:;
- (id)textLabel;
- (id)init;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (void)setTextLabel:;
- (id)tapAction;
- (void)setTapAction:;
+ (id)buttonSizeWithTitle:;
@end
