@interface EDBIMIManager : NSObject
@property (nonatomic) EDMessagePersistence messagePersistence;
@property (nonatomic) EMRemoteContentURLSession urlSession;
@property (nonatomic) <EFScheduler> downloadScheduler;
- (id)urlSession;
- (void)scheduleRecurringActivity;
- (void)dealloc;
- (id)downloadScheduler;
- (id)initWithMessagePersistence:urlSession:;
- (void).cxx_destruct;
- (id)processBIMIHeadersForMessages:;
- (void)test_tearDown;
- (id)messagePersistence;
@end
