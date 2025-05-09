@interface IDSActivityMonitor : NSObject
@property (nonatomic) _IDSActivityMonitorXPCConnector XPCConnector;
@property (nonatomic) NSString activityIdentifier;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) <IDSActivityMonitorListenerDelegate> delegate;
@property (nonatomic) NSArray subscriptions;
@property (nonatomic) NSString activity;
@property (nonatomic) BOOL listeningForUpdates;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)beginBroadcastingWithInfo:withCompletion:;
- (void)dealloc;
- (id)activityIdentifier;
- (id)subscriptions;
- (void)handleIncomingUpdate:onActivity:completion:;
- (void)setDelegate:;
- (id)initWithActivity:serviceIdentifier:;
- (void)setListeningForUpdates:;
- (id)activity;
- (void)setActivityIdentifier:;
- (id)delegate;
- (void)setXPCConnector:;
- (void).cxx_destruct;
- (void)stopBroadcastingForSubActivity:withCompletion:;
- (id)XPCConnector;
- (id)initWithActivity:serviceIdentifier:queue:xpcConnector:;
- (BOOL)listeningForUpdates;
- (void)setQueue:;
- (id)initWithActivity:serviceIdentifier:queue:;
- (id)queue;
@end
