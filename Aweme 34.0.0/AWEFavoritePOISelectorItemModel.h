@interface AWEFavoritePOISelectorItemModel : AWEBaseApiModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString selectorType;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL locationPerm;
@property (nonatomic) NSArray nextList;
- (id)selectorType;
- (void)setSelectorType:;
- (BOOL)locationPerm;
- (void)setLocationPerm:;
- (id)nextList;
- (void)setNextList:;
- (void)setIsSelected:;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)nextListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
