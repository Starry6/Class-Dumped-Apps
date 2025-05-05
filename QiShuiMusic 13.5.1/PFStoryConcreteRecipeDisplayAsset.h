@interface PFStoryConcreteRecipeDisplayAsset : PFStoryConcreteRecipeAsset
@property (nonatomic) NSString scheme;
@property (nonatomic) NSString cloudIdentifier;
@property (nonatomic) q category;
@property (nonatomic) NSString identifier;
@property (nonatomic) q kind;
@property (nonatomic) NSURL url;
@property (nonatomic) NSString diagnosticDescription;
- (id)scheme;
- (BOOL)isEqualToAsset:;
- (void).cxx_destruct;
- (long long)category;
- (id)cloudIdentifier;
- (id)initWithIdentifier:kind:url:;
- (id)initWithIdentifier:category:scheme:cloudIdentifier:;
+ (BOOL)decomposeURL:usingBlock:;
+ (id)URLWithScheme:cloudIdentifier:;
@end
