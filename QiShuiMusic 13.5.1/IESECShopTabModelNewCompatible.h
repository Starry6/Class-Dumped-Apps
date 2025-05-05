@interface IESECShopTabModelNewCompatible : IESECShopTabModel
@property (nonatomic) NSArray subTabArray;
@property (nonatomic) NSNumber bottomModuleType;
@property (nonatomic) NSString bottomModuleParams;
- (id)bottomModuleParams;
- (id)bottomModuleType;
- (void)setBottomModuleParams:;
- (void)setBottomModuleType:;
- (void).cxx_destruct;
+ (id)subTabArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
