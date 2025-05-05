@interface MPAVRouteConnection : NSObject
@property (nonatomic) ^v externalDevice;
@property (nonatomic) BOOL connected;
@property (nonatomic) BOOL connecting;
@property (nonatomic) BOOL invalidated;
@property (nonatomic) @? invalidationHandler;
- (void)connectWithCompletion:;
- (void)dealloc;
- (BOOL)isInvalidated;
- (BOOL)isConnecting;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (id)externalDevice;
- (id)invalidationHandler;
- (void)reset;
- (void)setInvalidationHandler:;
- (id)description;
- (id)initWithExternalDevice:;
- (void)_externalDeviceConnectionStateDidChangeNotification:;
- (void)connectWithOptions:completion:;
- (void)connectWithUserInfo:completion:;
- (void)connectWithOptions:userInfo:completion:;
- (void)sendCustomData:;
- (void)sendMediaRemoteCommand:withOptions:completionHandler:;
- (void)_connectionStateDidChange:error:;
@end
