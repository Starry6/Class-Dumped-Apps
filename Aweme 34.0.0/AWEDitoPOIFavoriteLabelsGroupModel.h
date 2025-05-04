@interface AWEDitoPOIFavoriteLabelsGroupModel : MTLModel
@property (nonatomic) Q type;
@property (nonatomic) NSArray items;
@property (nonatomic) NSString defaultSelectedValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)items;
- (void)setItems:;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (id)defaultSelectedValue;
- (void)setDefaultSelectedValue:;
+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
