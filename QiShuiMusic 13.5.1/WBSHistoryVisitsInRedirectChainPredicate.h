@interface WBSHistoryVisitsInRedirectChainPredicate : NSObject
@property (nonatomic) WBSSetInt64 visitIdentifiers;
@property (nonatomic) WBSSetInt64 ignoredItemIdentifiers;
@property (nonatomic) q direction;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)direction;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)statementForDatabase:cache:fetchOptions:error:;
- (id)description;
- (BOOL)evaluateServiceVisit:;
- (BOOL)evaluateVisit:;
- (id)initWithHistoryVisits:ignoredItems:direction:;
- (id)visitIdentifiers;
- (id)ignoredItemIdentifiers;
+ (BOOL)supportsSecureCoding;
@end
