@interface MDLAreaLight : MDLPhysicallyPlausibleLight
@property (nonatomic) float areaRadius;
@property (nonatomic)  superEllipticPower;
@property (nonatomic) float aspect;
- (id)init;
- (float)aspect;
- (void)setAspect:;
- (void)setAreaRadius:;
- (void)setSuperEllipticPower:;
- (float)areaRadius;
- (id)superEllipticPower;
@end
