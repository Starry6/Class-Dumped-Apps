@interface AWEEcomSearchRealtimePushModel : AWEBaseApiModel
@property (nonatomic) NSArray items;
@property (nonatomic) NSArray onCardItems;
- (id)onCardItems;
- (void)setOnCardItems:;
- (id)items;
- (void)setItems:;
- (void).cxx_destruct;
+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
