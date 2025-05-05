@interface MDLLight : MDLObject
@property (nonatomic) Q lightType;
@property (nonatomic) NSString colorSpace;
- (id)position;
- (void)setColorSpace:;
- (id)init;
- (void)dealloc;
- (void)setTransform:;
- (id)colorSpace;
- (void).cxx_destruct;
- (void)setLightType:;
- (id)rtLight;
- (id)irradianceAtPoint:;
- (id)irradianceAtPoint:colorSpace:;
- (unsigned long long)lightType;
+ (id)lightWithSCNLight:;
@end
