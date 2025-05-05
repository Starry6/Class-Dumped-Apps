@interface PLLibraryScopeConditionDateRange : PLLibraryScopeCondition
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
- (id)startDate;
- (void)setStartDate:;
- (void)setEndDate:;
- (id)endDate;
- (unsigned char)type;
- (void).cxx_destruct;
- (id)description;
- (id)conditionQuery;
+ (id)conditionWithSingleQueries:criteria:;
+ (BOOL)supportsQueryKey:;
@end
