@interface WBSHistoryVisitsInTimeRangePredicate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)statementForDatabase:cache:fetchOptions:error:;
- (id)description;
- (BOOL)evaluateServiceVisit:;
- (BOOL)evaluateVisit:;
- (id)initWithStartDate:endDate:urlString:urlHash:urlSalt:;
+ (BOOL)supportsSecureCoding;
@end
