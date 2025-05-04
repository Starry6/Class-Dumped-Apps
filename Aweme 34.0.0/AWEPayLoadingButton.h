@interface AWEPayLoadingButton : DUXBaseButton
@property (nonatomic) UIImage loadingIcon;
@property (nonatomic) UIColor loadingTitleColor;
@property (nonatomic) UIColor normalTitleColor;
- (void)setLoadingIcon:;
- (id)loadingIcon;
- (void)startLoadingWithTitle:;
- (void)endLoadingWithTitle:;
- (id)loadingTitleColor;
- (void)setLoadingTitleColor:;
- (void).cxx_destruct;
- (id)normalTitleColor;
- (void)setNormalTitleColor:;
@end
