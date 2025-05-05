@interface ICSession : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) NSMutableArray notifications;
@property (nonatomic) NSInteger pid;
@property (nonatomic) BOOL openSession;
@property (nonatomic) Q objectHandle;
@property (nonatomic) BOOL forwardPTPEvents;
- (id)notifications;
- (void)dealloc;
- (int)pid;
- (id)connection;
- (void)setConnection:;
- (id)initWithConnection:;
- (unsigned long long)objectHandle;
- (void)setObjectHandle:;
- (BOOL)interestedInNotification:;
- (void)addNotifications:;
- (void)remNotifications:;
- (BOOL)openSession;
- (void)setOpenSession:;
- (BOOL)forwardPTPEvents;
- (void)setForwardPTPEvents:;
@end
