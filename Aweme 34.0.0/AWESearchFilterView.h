@interface AWESearchFilterView : UIView
@property (nonatomic) AWESearchFilterButton button;
@property (nonatomic) UIView redDot;
@property (nonatomic) CAGradientLayer graditentLayer;
@property (nonatomic) BOOL isDisappeared;
- (void)setRedDot:;
- (id)redDot;
- (void)showWithAnimation:;
- (void)disappearWithAnimation:;
- (id)graditentLayer;
- (void)setGraditentLayer:;
- (void)setIsDisappeared:;
- (id)init;
- (id)accessibilityElements;
- (void)setButton:;
- (void).cxx_destruct;
- (id)button;
- (BOOL)isAccessibilityElement;
- (BOOL)isDisappeared;
+ (double)filterButtonWidth;
+ (double)filterGradientWidth;
@end
