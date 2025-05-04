@interface AWESearchGoodsItemView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel moreLabel;
@property (nonatomic) AWESearchEcommerceAnchorModel model;
@property (nonatomic) BOOL showMore;
- (void)reloadWithModel:;
- (void)setShowMore:;
- (BOOL)showMore;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (void)setupUI;
- (id)moreLabel;
- (void)setMoreLabel:;
@end
