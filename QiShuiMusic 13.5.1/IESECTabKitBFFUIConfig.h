@interface IESECTabKitBFFUIConfig : NSObject
@property (nonatomic) double splitUpSlideMinY;
@property (nonatomic) double fullScreenStateY;
@property (nonatomic) double splitAutoUpSlideToFullY;
@property (nonatomic) BOOL disableAutoSlide;
@property (nonatomic) q splitIndicatorTopOffset;
@property (nonatomic) IESECTabKitBFFTabBarStyle topTabBarStyle;
@property (nonatomic) IESECTabKitBFFTabBarStyle bottomTabBarStyle;
- (id)bottomTabBarStyle;
- (BOOL)disableAutoSlide;
- (double)fullScreenStateY;
- (void)setBottomTabBarStyle:;
- (void)setDisableAutoSlide:;
- (void)setFullScreenStateY:;
- (void)setSplitAutoUpSlideToFullY:;
- (void)setSplitIndicatorTopOffset:;
- (void)setSplitUpSlideMinY:;
- (void)setTopTabBarStyle:;
- (double)splitAutoUpSlideToFullY;
- (long long)splitIndicatorTopOffset;
- (double)splitUpSlideMinY;
- (id)topTabBarStyle;
- (id)init;
- (void).cxx_destruct;
@end
