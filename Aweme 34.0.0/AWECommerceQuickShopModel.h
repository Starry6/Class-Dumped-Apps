@interface AWECommerceQuickShopModel : MTLModel
@property (nonatomic) NSString quickShopURL;
@property (nonatomic) NSString quickShopName;
@property (nonatomic) BOOL showTextEntry;
@property (nonatomic) AWECommerceQuickShopProcessModel quickShopProcessModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)quickShopURL;
- (id)quickShopName;
- (void)setQuickShopURL:;
- (void)setQuickShopName:;
- (BOOL)showTextEntry;
- (void)setShowTextEntry:;
- (id)quickShopProcessModel;
- (void)setQuickShopProcessModel:;
- (void).cxx_destruct;
+ (id)quickShopProcessModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
