@interface AWEECFeedGoodsCardTitleView : UIView
@property (nonatomic) AWEECFeedGoodsCardModel model;
@property (nonatomic) UIImageView tagView;
@property (nonatomic) UIImageView moreView;
@property (nonatomic) UILabel titleLabel;
- (void)setupUIWithModel:;
- (id)moreView;
- (void)setMoreView:;
- (void)setModel:;
- (id)initWithModel:;
- (id)model;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)tagView;
- (void)setTagView:;
@end
