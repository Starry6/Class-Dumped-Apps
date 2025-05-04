@interface AWEPlayInteractionElementMaskView : UIView
@property (nonatomic) AWEPlayInteractionElementMask topMaskView;
@property (nonatomic) AWEPlayInteractionElementMask centerMaskView;
@property (nonatomic) AWEPlayInteractionElementMask bottomMaskView;
- (void)setBottomMaskView:;
- (id)bottomMaskView;
- (id)topMaskView;
- (void)setTopMaskView:;
- (void)setCenterMaskView:;
- (id)centerMaskView;
- (void)setUpElementMaskViewGradientWhite;
- (void)setUpElementMaskViewGradientTexture;
- (void)setUpGradientWithType:;
- (void)setUp;
- (void).cxx_destruct;
+ (id)elementMaskView;
@end
