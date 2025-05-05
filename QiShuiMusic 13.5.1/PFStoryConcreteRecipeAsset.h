@interface PFStoryConcreteRecipeAsset : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) q kind;
@property (nonatomic) NSURL url;
@property (nonatomic) NSString diagnosticDescription;
- (id)url;
- (id)init;
- (id)identifier;
- (long long)kind;
- (id)diagnosticDescription;
- (BOOL)isEqualToAsset:;
- (void).cxx_destruct;
- (id)initWithIdentifier:kind:url:;
@end
