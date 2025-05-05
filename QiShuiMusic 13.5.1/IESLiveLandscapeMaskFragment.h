@interface IESLiveLandscapeMaskFragment : IESLiveRoomComponent
@property (nonatomic) HTSLiveAmazingBackgroundView topMaskView;
@property (nonatomic) HTSLiveAmazingBackgroundView bottomMaskView;
- (void)setTopMaskView:;
- (id)bottomMaskView;
- (void)componentMount;
- (void)componentOrientationTransitioning:;
- (void)componentUnmount;
- (void)handleOrientationChanged:;
- (void)hideComponent;
- (id)landscapeBottomGradientLayer;
- (id)landscapeTopGradientLayer;
- (void)setBottomMaskView:;
- (void)showComponent;
- (id)topMaskView;
- (void).cxx_destruct;
+ (BOOL)isMixed;
@end
