@interface IESECShopInfoSWSResponse : IESECShopInfoResponse
@property (nonatomic) NSDictionary blockData;
- (id)blockData;
- (void)parseModuleListObjects;
- (void)setBlockData:;
- (void).cxx_destruct;
+ (id)blockDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
