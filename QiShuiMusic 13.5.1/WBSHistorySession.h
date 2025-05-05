@interface WBSHistorySession : NSObject
@property (nonatomic) NSDate startDate;
@property (nonatomic) BOOL isCurrentSession;
- (id)startDate;
- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithSessionStartDate:;
- (BOOL)isCurrentSession;
+ (id)currentSession;
@end
