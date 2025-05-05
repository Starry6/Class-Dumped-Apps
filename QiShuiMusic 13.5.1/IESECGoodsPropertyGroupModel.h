@interface IESECGoodsPropertyGroupModel : MTLModel
@property (nonatomic) NSString groupName;
@property (nonatomic) NSArray propertyItems;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setGroupName:;
- (void).cxx_destruct;
- (id)groupName;
- (id)propertyItems;
- (void)setPropertyItems:;
+ (id)propertyItemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
