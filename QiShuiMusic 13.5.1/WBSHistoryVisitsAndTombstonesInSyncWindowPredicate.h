@interface WBSHistoryVisitsAndTombstonesInSyncWindowPredicate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)evaluateTombstone:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (BOOL)evaluateServiceTombstone:;
- (id)statementForDatabase:cache:fetchOptions:error:;
- (id)description;
- (BOOL)evaluateServiceVisit:;
- (BOOL)evaluateVisit:;
- (id)initWithSyncWindow:lastSyncedGeneration:;
+ (BOOL)supportsSecureCoding;
@end
