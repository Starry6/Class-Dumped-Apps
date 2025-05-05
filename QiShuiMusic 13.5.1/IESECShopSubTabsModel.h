@interface IESECShopSubTabsModel : MTLModel
@property (nonatomic) NSArray subTabs;
@property (nonatomic) Q selectedSubTabType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)subTabs;
- (unsigned long long)selectedSubTabType;
- (void)setSelectedSubTabType:;
- (void)setSubTabs:;
- (void).cxx_destruct;
+ (id)subTabsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
