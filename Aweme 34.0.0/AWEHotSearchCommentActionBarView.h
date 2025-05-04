@interface AWEHotSearchCommentActionBarView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) YYLabel timeLabel;
@property (nonatomic) UILabel replyLabel;
@property (nonatomic) AWEHotSearchCommentActionButton likeButton;
@property (nonatomic) @? likeBtnClickedBlock;
@property (nonatomic) @? commentBtnClickedBlock;
- (void)configWithModel:;
- (id)replyLabel;
- (void)setReplyLabel:;
- (id)commentBtnClickedBlock;
- (id)likeBtnClickedBlock;
- (void)updateReplyLabelHidden:;
- (void)setLikeBtnClickedBlock:;
- (void)setCommentBtnClickedBlock:;
- (void)setTimeLabel:;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (id)timeLabel;
- (id)likeButton;
- (void)setLikeButton:;
@end
