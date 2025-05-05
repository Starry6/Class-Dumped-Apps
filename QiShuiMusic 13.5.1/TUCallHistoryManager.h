@interface TUCallHistoryManager : NSObject
@property (nonatomic) <TUCallHistoryManagerDataSource> dataSource;
- (id)init;
- (void)dealloc;
- (id)initWithDataSource:;
- (id)dataSource;
- (void).cxx_destruct;
- (void)updateOutgoingLocalParticipantUUID:forCallsWithOutgoingLocalParticipantUUID:;
- (void)updateOutgoingLocalParticipantUUID:forCallsWithLocalParticipantUUID:;
@end
