@interface AWEDTONetFileBean : MTLModel
@property (nonatomic) NSString sourceMaterialPath;
@property (nonatomic) NSString algorithm;
@property (nonatomic) NSString serverMaterialPath;
@property (nonatomic) NSString jsonParams;
@property (nonatomic) q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)sourceMaterialPath;
- (void)setSourceMaterialPath:;
- (id)serverMaterialPath;
- (void)setServerMaterialPath:;
- (id)jsonParams;
- (void)setJsonParams:;
- (id)algorithm;
- (id)init;
- (void)setAlgorithm:;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
