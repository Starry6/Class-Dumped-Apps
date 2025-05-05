@interface CNChangeHistoryEvent : NSObject
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)compare:;
- (id)description;
- (id)copyWithZone:;
- (void)acceptEventVisitor:;
- (long long)comparisonResultBetweenClasses:;
- (long long)comparisonResultWithinSameClass:;
+ (BOOL)supportsSecureCoding;
+ (unsigned long long)instanceSortOrder;
@end
