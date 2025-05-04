@interface AWEDitoPOIFavoriteEnterTitleComponentView : DitoComponentView
@property (nonatomic) AWEDitoPOIFavoriteEnterTitleComponentViewModel viewModel;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel enterLabel;
@property (nonatomic) UIImageView iconView;
- (void)updateViewModel:;
- (void)setEnterLabel:;
- (id)enterLabel;
- (void)didTapEnterLabel;
- (id)viewModel;
- (id)initWithFrame:;
- (id)iconView;
- (void)setIconView:;
- (void)setTitleLabel:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
@end
