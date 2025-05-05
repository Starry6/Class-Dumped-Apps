@interface WBSHistorySessionWithItems : WBSHistorySession
@property (nonatomic) NSArray items;
- (id)init;
- (id)items;
- (void).cxx_destruct;
- (id)initWithSessionStartDate:;
- (id)initWithSessionStartDate:items:;
@end
