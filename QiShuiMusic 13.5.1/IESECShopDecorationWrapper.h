@interface IESECShopDecorationWrapper : MTLModel
@property (nonatomic) q moduleType;
@property (nonatomic) IESECShopDecorationModelV1 decorationV1;
@property (nonatomic) IESECShopDecorationModelV2 decorationV2;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)decorationV1;
- (id)decorationV2;
- (void)setDecorationV1:;
- (void)setDecorationV2:;
- (void).cxx_destruct;
- (long long)moduleType;
- (void)setModuleType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
