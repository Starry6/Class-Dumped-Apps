@interface AWEGoodsSKUSpec : MTLModel
@property (nonatomic) NSArray items;
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)items;
- (void)setItems:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
