@interface AWEDitoPOIFavoriteSelectorModel : MTLModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString selectorType;
@property (nonatomic) NSString selectorTypeV2;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL locationPerm;
@property (nonatomic) NSArray nextList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)selectorType;
- (void)setSelectorType:;
- (BOOL)locationPerm;
- (void)setLocationPerm:;
- (id)nextList;
- (void)setNextList:;
- (id)selectorTypeV2;
- (void)setSelectorTypeV2:;
- (void)setIsSelected:;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
+ (id)nextListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
