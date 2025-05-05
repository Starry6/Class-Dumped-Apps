@interface PFStoryConcreteRecipeSongAsset : PFStoryConcreteRecipeAsset
@property (nonatomic) NSString colorGradeCategory;
@property (nonatomic) q category;
@property (nonatomic) q subcategory;
@property (nonatomic) NSString catalog;
@property (nonatomic) NSString songID;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString identifier;
@property (nonatomic) q kind;
@property (nonatomic) NSURL url;
@property (nonatomic) NSString diagnosticDescription;
- (id)catalog;
- (BOOL)isEqualToAsset:;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (id)subtitle;
- (long long)category;
- (long long)subcategory;
- (id)initWithIdentifier:kind:url:;
- (id)songID;
- (id)colorGradeCategory;
- (void)setColorGradeCategory:;
- (id)initWithIdentifier:category:subcategory:catalog:songID:title:subtitle:;
+ (id)URLWithCatalog:songID:;
+ (BOOL)decomposeURL:usingBlock:;
@end
