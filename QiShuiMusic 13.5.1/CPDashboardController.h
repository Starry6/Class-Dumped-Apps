@interface CPDashboardController : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) <CPDashboardProviding> dashboardProvider;
@property (nonatomic) NSArray shortcutButtons;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_invalidate;
- (void)_connectionInterrupted;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (id)_init;
- (void)_connectionInvalidated;
- (void)handleActionForControlIdentifier:;
- (void)_sceneConnect:;
- (void)_connectToListenerEndpoint:;
- (void)setShortcutButtons:;
- (id)shortcutButtons;
- (id)dashboardProvider;
- (void)setDashboardProvider:;
+ (id)_dashboardProvidingInterface;
+ (id)_dashboardClientInterface;
@end
