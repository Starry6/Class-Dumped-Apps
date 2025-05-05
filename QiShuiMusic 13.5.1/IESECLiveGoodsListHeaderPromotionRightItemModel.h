@interface IESECLiveGoodsListHeaderPromotionRightItemModel : MTLModel
@property (nonatomic) NSString jumpURL;
@property (nonatomic) NSArray contentItems;
@property (nonatomic) NSString schemaParamType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)jumpURL;
- (id)schemaParamType;
- (void)setJumpURL:;
- (void)setSchemaParamType:;
- (id)contentItems;
- (void).cxx_destruct;
- (void)setContentItems:;
+ (id)contentItemsJSONTransformer;
+ (id)defaultContentItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
