@interface PGBackgroundPIPService : NSObject
@property (nonatomic) <PGBackgroundPIPServiceDelegate> delegate;
@property (nonatomic) NSSet identifiersForAuthorizedActivitySessions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)listener:didReceiveConnection:withContext:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)startListener;
- (void)backgroundPIPTargetRequestsAuthorization:;
- (void)backgroundPIPTargetDidInvalidate:;
- (void)_handleInvalidatedTarget:;
- (void)pipDidStartForRemoteObject:;
- (void)pipDidStopForRemoteObject:;
- (BOOL)hasAcquiredAuthorizationForActivitySessionWithIdentifier:appBundleIdentifier:;
- (void)revokeAuthorizationActivitySessionWithIdentifier:;
- (id)_targetForIdentifier:;
- (id)identifiersForAuthorizedActivitySessions;
@end
