@interface PLLibraryScopeCondition : NSObject
@property (nonatomic) C type;
@property (nonatomic) C criteria;
- (void)setCriteria:;
- (unsigned char)criteria;
- (id)query;
- (unsigned char)type;
- (id)description;
- (id)copyWithZone:;
- (id)initWithCriteria:;
- (id)conditionQuery;
+ (void)_abortIfCalledOnBaseClass;
+ (id)conditionWithSingleQueries:criteria:;
+ (BOOL)supportsQueryKey:;
@end
