@interface CADEventTimeWindowPredicate : CADPredicate
@property (nonatomic) CADPredicate wrappedPredicate;
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) BOOL mustStartInInterval;
- (BOOL)ekPredicateEvaluateWithObject:;
- (id)startDate;
- (id)predicateFormat;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)endDate;
- (void).cxx_destruct;
- (id)defaultPropertiesToLoad;
- (id)wrappedPredicate;
- (id)initWithPredicate:limitWithStartDate:endDate:mustStartInInterval:;
- (BOOL)mustStartInInterval;
- (id)copyMatchingItemsWithDatabase:;
+ (BOOL)supportsSecureCoding;
@end
