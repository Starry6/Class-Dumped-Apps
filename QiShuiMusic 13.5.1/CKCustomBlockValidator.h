@interface CKCustomBlockValidator : CKPredicateValidatorInstance
@property (nonatomic) @? block;
- (id)block;
- (BOOL)validate:error:;
- (id)initWithBlock:;
- (void).cxx_destruct;
- (void)setBlock:;
@end
