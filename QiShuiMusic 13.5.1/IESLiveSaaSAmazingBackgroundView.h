@interface IESLiveSaaSAmazingBackgroundView : UIView
@property (nonatomic) Q corner;
@property (nonatomic) {CGSize=dd} cornerRadii;
@property (nonatomic) BOOL hasCorner;
- (void)applyCorner:radii:;
- (BOOL)hasCorner;
- (void)setHasCorner:;
- (void)layoutSubviews;
- (void)setCornerRadii:;
- (id)gradientLayer;
- (id)cornerRadii;
- (unsigned long long)corner;
- (void)setCorner:;
+ (Class)layerClass;
@end
