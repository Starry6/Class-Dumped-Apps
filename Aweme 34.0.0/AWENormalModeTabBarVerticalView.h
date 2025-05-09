@interface AWENormalModeTabBarVerticalView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel label;
@property (nonatomic) NSString updatedSelectedText;
@property (nonatomic) NSString updatedUnselectedText;
@property (nonatomic) UIImage updatedSelectedImage;
@property (nonatomic) UIImage updatedUnselectedImage;
@property (nonatomic) BOOL refreshAnimatedEnabled;
@property (nonatomic) <AWETabBarInnerViewUIConfigProtocol> config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)tabbarStatusDidChanged:animated:;
- (id)badgeBasePosition;
- (id)currentTitleText;
- (void)setUpdatedSelectedText:;
- (void)setUpdatedUnselectedText:;
- (void)setUpdatedSelectedImage:;
- (void)setUpdatedUnselectedImage:;
- (id)updatedSelectedText;
- (id)updatedUnselectedText;
- (id)updatedSelectedImage;
- (id)updatedUnselectedImage;
- (void)updateTabBarButtonImage:;
- (BOOL)refreshAnimatedEnabled;
- (void)setRefreshAnimatedEnabled:;
- (void)setLabel:;
- (void)setConfig:;
- (void)updateImage;
- (void)addObserver;
- (id)config;
- (id)label;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setImageView:;
- (id)imageView;
- (void)setUpViews;
- (void)updateTitle:;
+ (id)viewWithConfig:;
@end
