@interface UIShadowView : UIView
- (void)drawRect:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setShadowImage:forEdge:inside:;
+ (id)topShadowImage;
+ (id)bottomShadowImage;
@end
