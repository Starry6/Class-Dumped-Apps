@interface WBSHistoryVisitsWithIDPredicate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)statementForDatabase:cache:fetchOptions:error:;
- (id)description;
- (BOOL)evaluateServiceVisit:;
- (BOOL)evaluateVisit:;
- (id)initWithHistoryVisitIDs:;
+ (id)new;
+ (BOOL)supportsSecureCoding;
@end
