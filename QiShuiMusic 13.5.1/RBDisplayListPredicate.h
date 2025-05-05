@interface RBDisplayListPredicate : NSObject
@property (nonatomic) BOOL invertsResult;
- (void)addCondition:;
- (void)removeAll;
- (BOOL)invertsResult;
- (void)setInvertsResult:;
- (void).cxx_destruct;
- (id)filteringDisplayList:;
- (void)addConditionWithFillColor:colorSpace:;
- (void)addPredicate:;
- (id).cxx_construct;
- (id)copyWithZone:;
+ (id)predicate;
@end
