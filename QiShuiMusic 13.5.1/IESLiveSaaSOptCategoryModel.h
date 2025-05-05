@interface IESLiveSaaSOptCategoryModel : BDDynamicMTLModel
@property (nonatomic) q categoryId;
@property (nonatomic) NSString title;
@property (nonatomic) q level;
@property (nonatomic) NSArray subCategories;
@property (nonatomic) NSString categoryAppScheme;
@property (nonatomic) q orientation;
@property (nonatomic) q challengeId;
@property (nonatomic) NSString challengeName;
@property (nonatomic) NSString challengeIdName;
@property (nonatomic) BOOL canChoose;
@property (nonatomic) NSString unChooseMessage;
@property (nonatomic) BOOL isOtherCategory;
@property (nonatomic) BOOL isSelecting;
@property (nonatomic) BOOL disable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)copyWithZone:;
+ (id)subCategoriesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
