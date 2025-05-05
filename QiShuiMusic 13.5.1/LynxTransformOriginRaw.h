@interface LynxTransformOriginRaw : NSObject
@property (nonatomic) float p0;
@property (nonatomic) float p1;
- (BOOL)hasPercent;
- (BOOL)isP0Percent;
- (BOOL)isP0Valid;
- (BOOL)isP1Percent;
- (BOOL)isP1Valid;
- (BOOL)isDefault;
- (id)init;
- (BOOL)isValid;
- (float)p1;
- (float)p0;
- (void)setP0:;
- (void)setP1:;
+ (id)convertToLynxTransformOriginRaw:;
@end
