@interface AWEDitoPOIFavoriteOrderFooterComponentView : DitoComponentView
@property (nonatomic) AWEDitoPOIFavoriteOrderFooterCellViewModel viewModel;
@property (nonatomic) UILabel footerTextLabel;
@property (nonatomic) UIImageView rightIcon;
- (void)setRightIcon:;
- (void)updateViewModel:;
- (id)viewModel;
- (id)initWithFrame:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setupUI;
- (void)updateUI;
- (id)rightIcon;
- (void)handleTap;
- (id)footerTextLabel;
- (void)setFooterTextLabel:;
@end
