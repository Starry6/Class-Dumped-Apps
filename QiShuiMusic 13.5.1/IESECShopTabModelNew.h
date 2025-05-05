@interface IESECShopTabModelNew : MTLModel
@property (nonatomic) Q tabType;
@property (nonatomic) NSString name;
@property (nonatomic) BOOL activated;
@property (nonatomic) IESECShopDynamicTabModel dynamicTab;
@property (nonatomic) IESECShopProductTabModel productTab;
@property (nonatomic) IESECShopSubTabsModel subTabs;
@property (nonatomic) IESECShopTabBizInfoModel bizInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bizInfo;
- (id)subTabs;
- (unsigned long long)tabType;
- (id)dynamicTab;
- (id)productTab;
- (void)setBizInfo:;
- (void)setDynamicTab:;
- (void)setProductTab:;
- (void)setSubTabs:;
- (void)setTabType:;
- (void)setName:;
- (void).cxx_destruct;
- (void)setActivated:;
- (id)name;
- (BOOL)activated;
+ (id)JSONKeyPathsByPropertyKey;
@end
