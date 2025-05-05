@interface PFStoryConcreteRecipeLibrary : NSObject
@property (nonatomic) q kind;
@property (nonatomic) NSURL url;
@property (nonatomic) NSString diagnosticDescription;
- (id)url;
- (id)init;
- (long long)kind;
- (id)diagnosticDescription;
- (void).cxx_destruct;
- (BOOL)isEqualToLibrary:;
- (id)initWithKind:url:;
@end
