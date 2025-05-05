@interface BDUGLuckyCooling : BDUGLuckyBDModel
@property (nonatomic) NSArray<BDUGLuckyCoolingPath> coolingPathList;
@property (nonatomic) BOOL enableCooling;
- (id)coolingPathList;
- (void)setCoolingPathList:;
- (void).cxx_destruct;
- (BOOL)enableCooling;
- (void)setEnableCooling:;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@end
