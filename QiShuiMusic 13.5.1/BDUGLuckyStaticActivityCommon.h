@interface BDUGLuckyStaticActivityCommon : BDUGLuckyBDModel
@property (nonatomic) NSDictionary schemaProxy;
- (void)setSchemaProxy:;
- (BOOL)modelCustomTransformFromDictionary:;
- (id)schemaProxy;
- (id)initWithDictionary:error:;
- (void).cxx_destruct;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@end
