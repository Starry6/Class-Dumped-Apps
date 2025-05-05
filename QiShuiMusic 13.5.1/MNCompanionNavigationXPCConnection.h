@interface MNCompanionNavigationXPCConnection : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)_closeConnection;
- (void)_stop;
- (void)_openConnection;
- (void).cxx_destruct;
- (void)updateNavigationRouteDetails:routeStatus:;
- (void)updateNavigationRouteStatus:;
- (void)updateNavigationRouteWithUpdate:;
- (void)_connectionWasInterrupted;
- (void)_connectionWasInvalidated;
- (void)_resendRouteDetailsAndStatus;
@end
