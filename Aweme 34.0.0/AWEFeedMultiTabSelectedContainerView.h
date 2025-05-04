@interface AWEFeedMultiTabSelectedContainerView : UIView
@property (nonatomic) AWEHPTopTabItemViewUIConfig config;
@property (nonatomic) UIView selectedLineView;
@property (nonatomic) UIView selectedImageContainerView;
@property (nonatomic) UIImageView lightModeImageView;
@property (nonatomic) UIImageView darkModeImageView;
- (void)setHidden:;
- (id)selectedLineView;
- (void)setSelectedLineView:;
- (void)updateDisplayInfoWithItem:andRatio:;
- (void)changeToLightTheme:;
- (id)initWithConfig:selectedLineView:;
- (id)initWithFrame:selectedLineView:;
- (id)lightModeImageView;
- (id)darkModeImageView;
- (id)selectedImageContainerView;
- (void)setSelectedImageContainerView:;
- (void)setLightModeImageView:;
- (void)setDarkModeImageView:;
- (void)setConfig:;
- (id)config;
- (void).cxx_destruct;
- (void)setupUI;
@end
