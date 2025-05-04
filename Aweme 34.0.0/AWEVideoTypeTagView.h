@interface AWEVideoTypeTagView : UIView
@property (nonatomic) UILabel tagLabel;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) {CGSize=dd} iconViewSize;
@property (nonatomic) AWEVideoTypeTagViewModel viewModel;
- (void)configWithViewModel:;
- (id)tagLabel;
- (void)setTagLabel:;
- (void)setupTagLabel;
- (void)p_removeSubviews;
- (void)setupIconImage;
- (double)tagViewWidth;
- (double)tagViewHeight;
- (id)iconViewSize;
- (id)viewModel;
- (id)iconView;
- (void)setIconView:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setupConstraints;
- (void)setupUI;
- (void)setIconViewSize:;
@end
