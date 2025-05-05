@interface WBSRemoteHistorySession : NSObject
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
@property (nonatomic) NSArray items;
@property (nonatomic) BOOL currentSession;
- (id)startDate;
- (id)init;
- (id)items;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)endDate;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (BOOL)isCurrentSession;
- (id)initWithStartDate:endDate:items:;
+ (BOOL)supportsSecureCoding;
@end
