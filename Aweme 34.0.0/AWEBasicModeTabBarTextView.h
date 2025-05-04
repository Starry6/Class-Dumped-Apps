@interface AWEBasicModeTabBarTextView : UIView
@property (nonatomic) BOOL isInTitleChangedAnimation;
@property (nonatomic) UILabel label;
@property (nonatomic) <AWETabBarInnerViewUIConfigProtocol> config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)tabbarStatusDidChanged:animated:;
- (id)badgeBasePosition;
- (void)updateTitle:animated:completion:;
- (BOOL)isInTitleChangedAnimation;
- (void)setIsInTitleChangedAnimation:;
- (void)textColorChangedWithSelectedStatus:;
- (void)labelTransformWithStatus:;
- (id)currentTitleText;
- (id)accessibilityLabel;
- (void)setLabel:;
- (void)setConfig:;
- (id)config;
- (id)label;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateTitle:animated:;
- (void)updateTitle:;
+ (id)viewWithConfig:;
@end
