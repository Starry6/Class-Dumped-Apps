@interface IESIMUserTabSetting : MTLModel
@property (nonatomic) IESIMUserEnterpriseTab enterpriseTab;
@property (nonatomic) IESIMUserPrivateTab privateTab;
@property (nonatomic) IESIMTTUserShopTab ttUserShopTab;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)enterpriseTab;
- (id)privateTab;
- (void)setEnterpriseTab:;
- (void)setPrivateTab:;
- (void)setTtUserShopTab:;
- (id)ttUserShopTab;
- (void).cxx_destruct;
+ (id)enterpriseTabJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
