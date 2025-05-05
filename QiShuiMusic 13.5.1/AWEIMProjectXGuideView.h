@interface AWEIMProjectXGuideView : UIControl
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel replyLabel;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) UIImageView arrowView;
- (id)descLabel;
- (id)replyLabel;
- (void)setDescLabel:;
- (void)setReply:desc:;
- (void)setReplyLabel:;
- (id)iconView;
- (void)setIconView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)arrowView;
- (void)setArrowView:;
- (void)setupUI;
@end
