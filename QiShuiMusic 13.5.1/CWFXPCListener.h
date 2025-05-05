@interface CWFXPCListener : NSObject
@property (nonatomic) <CWFXPCListenerDelegate> delegate;
@property (nonatomic) q serviceType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)registeredEventIDs;
- (id)init;
- (long long)serviceType;
- (void)setDelegate:;
- (id)registeredActivities;
- (void)suspend;
- (id)XPCConnections;
- (void)sendXPCEvent:reply:;
- (void)resume;
- (id)initWithServiceType:;
- (id)delegate;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (void)XPCConnection:canceledXPCRequestsWithUUID:;
- (void)XPCConnection:receivedXPCRequest:;
- (void)XPCConnection:updatedRegisteredEventIDs:;
- (void)invalidate;
- (BOOL)__allowXPCConnection:serviceType:;
@end
