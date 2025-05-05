@interface IESECGoodsDetailHaiNanTaxDataModel : MTLModel
@property (nonatomic) IESECLongContentLabelElement title;
@property (nonatomic) NSArray tabItems;
@property (nonatomic) IESECGoodsDetailHaiNanTabItemDataModel currentSelectTab;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentSelectTab;
- (void)setCurrentSelectTab:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)tabItems;
- (void)setTabItems:;
+ (id)tabItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
