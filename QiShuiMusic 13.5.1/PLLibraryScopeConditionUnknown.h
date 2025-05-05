@interface PLLibraryScopeConditionUnknown : PLLibraryScopeCondition
@property (nonatomic) NSArray unknownSingleQueries;
- (unsigned char)type;
- (void).cxx_destruct;
- (id)unknownSingleQueries;
- (id)conditionQuery;
- (void)setUnknownSingleQueries:;
+ (id)conditionWithSingleQueries:criteria:;
+ (BOOL)supportsQueryKey:;
@end
