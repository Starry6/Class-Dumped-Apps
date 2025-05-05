@interface WBSHistoryItemToTagPairsPredicate : NSObject
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)startDate;
- (id)initWithCoder:;
- (id)initWithStartDate:endDate:;
- (void)encodeWithCoder:;
- (id)endDate;
- (void).cxx_destruct;
- (id)statementForDatabase:cache:fetchOptions:error:;
+ (BOOL)supportsSecureCoding;
@end
