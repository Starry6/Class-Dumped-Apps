@interface IESLiveSaaSSlideBeautyCellSupplementaryView : UICollectionReusableView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIView headerDotView;
@property (nonatomic) UIView footerDotView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) @? tapCallBack;
- (void)showHeaderView:;
- (void)setTapCallBack:;
- (id)footerDotView;
- (id)headerDotView;
- (void)hideSecondaryEffects;
- (void)layoutHeaderViewWithItem:withTapCallBack:;
- (void)setFooterDotView:;
- (void)setHeaderDotView:;
- (void)setupSubViews;
- (id)tapCallBack;
- (void)setupConstraints;
- (id)textLabel;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:;
- (void)setTextLabel:;
- (void)layoutFooterView;
@end
