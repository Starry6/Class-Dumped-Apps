@interface AWEUserLoginNavigationBarUIConfig : NSObject
@property (nonatomic) UIColor bgColor;
@property (nonatomic) BOOL hideBottomline;
@property (nonatomic) BOOL hideTitle;
@property (nonatomic) UIImage leftImage;
@property (nonatomic) UIColor rightColor;
@property (nonatomic) UIColor rightBgColor;
- (void)setRightColor:;
- (id)rightColor;
- (void)setHideBottomline:;
- (BOOL)hideBottomline;
- (id)rightBgColor;
- (void)setRightBgColor:;
- (void).cxx_destruct;
- (BOOL)hideTitle;
- (void)setHideTitle:;
- (id)leftImage;
- (void)setLeftImage:;
- (id)bgColor;
- (void)setBgColor:;
@end
