@interface IMConnectionMonitor : NSObject
@property (nonatomic) BOOL isImmediatelyReachable;
@property (nonatomic) BOOL requiresDataConnectionActivation;
@property (nonatomic) BOOL isDataConnectionActive;
@property (nonatomic) <IMConnectionMonitorDelegate> delegate;
@property (nonatomic) NSString remoteHost;
- (void)setDelegate:;
- (BOOL)isImmediatelyReachable;
- (void)clear;
- (id)delegate;
- (void).cxx_destruct;
- (void)goDisconnected;
- (void)_setup;
- (BOOL)requiresDataConnectionActivation;
- (void)goConnectedWithLocalSocketAddress:remoteSocketAddress:;
- (id)initWithRemoteHost:delegate:;
- (id)remoteHost;
- (BOOL)isDataConnectionActive;
- (void)setDataConnectionActive:;
+ (id)alloc;
@end
