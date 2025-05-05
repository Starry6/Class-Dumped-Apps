@interface IESECShopDynamicTabModel : MTLModel
@property (nonatomic) NSString bundleUrl;
@property (nonatomic) NSString tmpId;
@property (nonatomic) IESECShopDynamicTabDataModel data;
@property (nonatomic) IESECShopDynamicTabConfigModel config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bundleUrl;
- (void)setBundleUrl:;
- (void)setTmpId:;
- (id)tmpId;
- (id)data;
- (void)setConfig:;
- (void).cxx_destruct;
- (void)setData:;
- (id)config;
+ (id)JSONKeyPathsByPropertyKey;
@end
