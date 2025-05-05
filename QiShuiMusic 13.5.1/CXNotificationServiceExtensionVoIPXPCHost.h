@interface CXNotificationServiceExtensionVoIPXPCHost : NSObject
@property (nonatomic) NSXPCListener xpcListener;
@property (nonatomic) <CXNotificationServiceExtensionHostDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDelegate:;
- (void)notificationServiceExtension:reply:;
- (void)notificationServiceExtensionHost:didReceiveIncomingMessage:forBundleIdentifier:reply:;
- (id)xpcListener;
- (id)delegate;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (id)initWithDelegate:;
@end
