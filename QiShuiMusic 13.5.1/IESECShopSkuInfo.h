@interface IESECShopSkuInfo : MTLModel
@property (nonatomic) BOOL canSwitch;
@property (nonatomic) NSArray items;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canSwitch;
- (void)setCanSwitch:;
- (id)items;
- (void)setItems:;
- (void).cxx_destruct;
+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
