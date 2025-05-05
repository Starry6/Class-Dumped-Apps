@interface IESIMUIDynamicColor : UIColor
@property (nonatomic) @? resolveBlock;
@property (nonatomic) UIColor currentResolvedColor;
- (id)currentResolvedColor;
- (void)invalidateCurrentColor;
- (id)resolveBlock;
- (void)setCurrentResolvedColor:;
- (void)setResolveBlock:;
- (void)setFill;
- (void)setStroke;
- (BOOL)_isDynamic;
- (void)set;
- (BOOL)getHue:saturation:brightness:alpha:;
- (id)CGColor;
- (BOOL)getWhite:alpha:;
- (unsigned long long)hash;
- (BOOL)getRed:green:blue:alpha:;
- (id)colorWithAlphaComponent:;
- (void).cxx_destruct;
- (id)_highContrastDynamicColor;
- (id)description;
- (id)forwardingTargetForSelector:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)dynamicColorWithResolveBlock:;
@end
