@interface LynxBoxShadow : NSObject
@property (nonatomic) UIColor shadowColor;
@property (nonatomic) double offsetX;
@property (nonatomic) double offsetY;
@property (nonatomic) double blurRadius;
@property (nonatomic) double spreadRadius;
@property (nonatomic) BOOL inset;
@property (nonatomic) CALayer layer;
- (BOOL)isEqualToBoxShadow:;
- (void)setSpreadRadius:;
- (double)spreadRadius;
- (void)setLayer:;
- (double)blurRadius;
- (id)layer;
- (void)setBlurRadius:;
- (void).cxx_destruct;
- (id)shadowColor;
- (void)setShadowColor:;
- (BOOL)inset;
- (void)setInset:;
- (double)offsetX;
- (void)setOffsetX:;
- (double)offsetY;
- (void)setOffsetY:;
@end
