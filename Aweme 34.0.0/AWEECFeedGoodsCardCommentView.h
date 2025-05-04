@interface AWEECFeedGoodsCardCommentView : UIView
@property (nonatomic) AWEECFeedGoodsCardModel model;
@property (nonatomic) UIView goodCommentCountView;
@property (nonatomic) UIImageView avatar1;
@property (nonatomic) UIImageView avatar2;
@property (nonatomic) UILabel goodCommentCountLabel;
@property (nonatomic) YYLabel commentLabel;
- (void)setGoodCommentCountView:;
- (id)goodCommentCountView;
- (void)setAvatar1:;
- (id)avatar1;
- (void)setAvatar2:;
- (id)avatar2;
- (void)setGoodCommentCountLabel:;
- (id)goodCommentCountLabel;
- (void)updateCommentViewWithProductmodel:;
- (void)setModel:;
- (id)initWithModel:;
- (id)model;
- (void).cxx_destruct;
- (void)setupUI;
- (id)commentLabel;
- (void)setCommentLabel:;
@end
