@interface WBSHistoryVisitsNeedingRecomputedVisitCountsPredicate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)statementForDatabase:cache:fetchOptions:error:;
- (BOOL)evaluateServiceVisit:;
- (BOOL)evaluateVisit:;
+ (BOOL)supportsSecureCoding;
@end
