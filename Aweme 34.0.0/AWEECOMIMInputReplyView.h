@interface AWEECOMIMInputReplyView : UIView
@property (nonatomic) UIView lineView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIImageView cancelView;
@property (nonatomic) @? onClickCancel;
- (id)cancelView;
- (void)setCancelView:;
- (id)onClickCancel;
- (void)updateReplyViewWithReplyModel:;
- (void)setOnClickCancel:;
- (id)textLabel;
- (id)initWithFrame:;
- (void)onTap;
- (void).cxx_destruct;
- (id)lineView;
- (void)setLineView:;
- (void)setTextLabel:;
- (void)setupUI;
+ (id)displayStrWithReplyModel:;
+ (double)replyViewHeightWithReplyModel:;
@end
