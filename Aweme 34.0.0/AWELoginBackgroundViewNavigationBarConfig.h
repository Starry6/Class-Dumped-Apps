@interface AWELoginBackgroundViewNavigationBarConfig : NSObject
@property (nonatomic) UIColor bgColor;
@property (nonatomic) UIImage leftImage;
@property (nonatomic) UIColor rightColor;
@property (nonatomic) UIColor rightBgColor;
@property (nonatomic) AWENavigationBar navigationBar;
@property (nonatomic) UIButton leftButton;
@property (nonatomic) UIButton rightButton;
@property (nonatomic) BOOL hideBottomline;
- (void)setRightColor:;
- (id)rightColor;
- (void)setHideBottomline:;
- (BOOL)hideBottomline;
- (id)rightBgColor;
- (void)setRightBgColor:;
- (void)setLeftButton:;
- (void)setRightButton:;
- (id)navigationBar;
- (id)leftButton;
- (id)rightButton;
- (void).cxx_destruct;
- (void)setNavigationBar:;
- (id)leftImage;
- (void)setLeftImage:;
- (id)bgColor;
- (void)setBgColor:;
@end
