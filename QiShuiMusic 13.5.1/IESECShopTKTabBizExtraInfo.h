@interface IESECShopTKTabBizExtraInfo : MTLModel
@property (nonatomic) NSString toast;
@property (nonatomic) NSString tabHintText;
@property (nonatomic) NSNumber tabHintDuration;
@property (nonatomic) IESECShopProductTabModel productTab;
@property (nonatomic) IESECShopTKHybridTabModel hybridTab;
@property (nonatomic) Q liveFusionDisplayScene;
@property (nonatomic) NSArray globalComponents;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTabHintText:;
- (id)tabHintDuration;
- (id)globalComponents;
- (id)hybridTab;
- (unsigned long long)liveFusionDisplayScene;
- (id)productTab;
- (void)setGlobalComponents:;
- (void)setHybridTab:;
- (void)setLiveFusionDisplayScene:;
- (void)setProductTab:;
- (void)setTabHintDuration:;
- (id)tabHintText;
- (void).cxx_destruct;
- (void)setToast:;
- (id)toast;
+ (id)JSONKeyPathsByPropertyKey;
@end
