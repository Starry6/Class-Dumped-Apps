@interface LiveMessageListAnnounceView : UIView
@property (nonatomic) UILabel statusLabel;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) HTSLiveMessageListNode node;
@property (nonatomic) MASConstraint contentLabelBottomConstraint;
- (void)attachTipsView;
- (id)contentLabelBottomConstraint;
- (void)refreshWith:;
- (void)setContentLabelBottomConstraint:;
- (void)setTipsLabel:;
- (id)tipsLabel;
- (id)node;
- (id)init;
- (void)setTitleLabel:;
- (id)intrinsicContentSize;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setNode:;
- (void)setupViews;
- (id)contentLabel;
- (void)setContentLabel:;
- (id)statusLabel;
- (void)setStatusLabel:;
+ (double)heightForNode:;
@end
