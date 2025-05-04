@interface AWEDTOBeautyMetaData : MTLModel
@property (nonatomic) NSString effectName;
@property (nonatomic) NSString reserved_kw_id;
@property (nonatomic) NSString strength;
@property (nonatomic) NSString md5;
@property (nonatomic) BOOL isValid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)reserved_kw_id;
- (void)setReserved_kw_id:;
- (id)effectName;
- (void)setEffectName:;
- (void)setStrength:;
- (id)strength;
- (BOOL)isValid;
- (void)setIsValid:;
- (void).cxx_destruct;
- (void)setMd5:;
- (id)md5;
+ (id)strengthJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
