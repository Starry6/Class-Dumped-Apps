@interface PFStoryConcreteRecipePresentation : NSObject
@property (nonatomic) NSArray clips;
@property (nonatomic) NSString identifier;
@property (nonatomic) q clipCount;
@property (nonatomic) NSString diagnosticDescription;
- (id)identifier;
- (id)diagnosticDescription;
- (void).cxx_destruct;
- (id)clips;
- (id)clipAtIndex:;
- (BOOL)isEqualToPresentation:;
- (long long)clipCount;
- (id)initWithIdentifier:clips:;
@end
