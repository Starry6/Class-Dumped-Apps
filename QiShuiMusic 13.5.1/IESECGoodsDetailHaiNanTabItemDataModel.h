@interface IESECGoodsDetailHaiNanTabItemDataModel : MTLModel
@property (nonatomic) NSArray groupItems;
@property (nonatomic) IESECTextWithIconElement tabName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)setTabName:;
- (id)tabName;
- (id)groupItems;
- (void)setGroupItems:;
+ (id)groupItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
