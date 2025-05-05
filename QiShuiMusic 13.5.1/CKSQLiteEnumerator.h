@interface CKSQLiteEnumerator : NSEnumerator
@property (nonatomic) @? objectTranslator;
- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithDatabase:columns:from:where:bindings:orderBy:;
- (id)objectTranslator;
- (void)setObjectTranslator:;
@end
