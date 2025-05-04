@interface AWEEcommerceSearchSuspensionItemsSectionModel : MTLModel
@property (nonatomic) AWEEcommerceSearchPathHintCard pathHintCard;
@property (nonatomic) BOOL useServerUpdate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pathHintCard;
- (void)setPathHintCard:;
- (BOOL)useServerUpdate;
- (void)setUseServerUpdate:;
- (void).cxx_destruct;
+ (id)pathHintCardJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
