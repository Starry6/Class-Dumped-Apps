@interface CNPredicateValidator : NSObject
@property (nonatomic) NSSet allowedKeysSet;
@property (nonatomic) NSMutableSet usedKeysSet;
@property (nonatomic) BOOL validated;
@property (nonatomic) NSError error;
@property (nonatomic) NSPredicate predicate;
@property (nonatomic) NSArray allowedKeys;
@property (nonatomic) NSArray usedKeys;
- (void)visitPredicate:;
- (void)setError:;
- (id)allowedKeys;
- (id)error;
- (BOOL)validateWithError:;
- (id)predicate;
- (void)visitPredicateExpression:;
- (void)setPredicate:;
- (void)setAllowedKeys:;
- (void).cxx_destruct;
- (void)visitPredicateOperator:;
- (BOOL)validated;
- (void)setValidated:;
- (id)usedKeys;
- (void)resetUsedKeys;
- (id)allowedKeysSet;
- (void)setAllowedKeysSet:;
- (id)usedKeysSet;
- (void)setUsedKeysSet:;
@end
