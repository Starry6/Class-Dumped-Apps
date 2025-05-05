@interface BacklightdExportedObj : NSObject
@property (nonatomic) BrightnessSystemInternal server;
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)copyClientID;
- (void)dealloc;
- (void)clientSetSYNCPropertyWithKey:property:reply:;
- (id)server;
- (void)setServer:;
- (void)reconnect;
- (void)clientSetPropertyWithKey:property:;
- (void)registerNotificationForProperties:;
- (id)connection;
- (void)setConnection:;
- (void)clientCopyPropertyWithKey:reply:;
@end
