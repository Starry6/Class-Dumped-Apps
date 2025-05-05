@interface SBSRemoteAlertHandleXPCClient : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_connection;
- (id)init;
- (void).cxx_destruct;
- (void)_handleError:;
- (id)remoteAlertHandleWithIDDidActivate:;
- (id)remoteAlertHandleWithIDDidDeactivate:;
- (id)remoteAlertHandleWithID:didInvalidateWithError:;
- (id)remoteAlertHandlesForDefinition:allowsCreation:configurationContext:;
- (id)createRemoteAlertHandleWithDefinition:configurationContext:;
- (void)activateRemoteAlertHandle:withContext:;
- (void)invalidateRemoteAlertHandle:;
- (void)_invalidateHandleForHandleID:withError:;
@end
