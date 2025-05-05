@interface MKViewWithHairline : UIView
@property (nonatomic) UIColor hairlineColor;
@property (nonatomic) double leftHairlineInset;
@property (nonatomic) double rightHairlineInset;
@property (nonatomic) BOOL topHairlineHidden;
@property (nonatomic) BOOL bottomHairlineHidden;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setBottomHairlineHidden:;
- (BOOL)isBottomHairlineHidden;
- (void)setHairlineColor:;
- (void)setLeftHairlineInset:;
- (void)setRightHairlineInset:;
- (void)setTopHairlineHidden:;
- (BOOL)isTopHairlineHidden;
- (id)hairlineColor;
- (double)leftHairlineInset;
- (double)rightHairlineInset;
@end
