@interface PTTestRecipeInfo : NSObject
@property (nonatomic) NSString uniqueIdentifier;
@property (nonatomic) NSString domainIdentifier;
@property (nonatomic) NSString title;
@property (nonatomic) NSIndexSet events;
@property (nonatomic) NSString recipeDescription;
- (id)domainIdentifier;
- (id)uniqueIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)events;
- (id)recipeDescription;
- (id)initWithTestRecipe:domainInfo:;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
