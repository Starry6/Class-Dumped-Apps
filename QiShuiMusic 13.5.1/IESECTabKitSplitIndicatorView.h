@interface IESECTabKitSplitIndicatorView : UIView
@property (nonatomic) Q styleMode;
- (void)setStyleMode:;
- (void)setupDarkStyleMode;
- (void)setupLightStyleMode;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (unsigned long long)styleMode;
@end
