@interface CKContextXPCClient : NSObject
+ (void)registerForServiceUpdateNotifications:;
+ (id)isXPCConnectionError:;
+ (void)invalidateXpcConnection;
+ (id)xpcConnection;
+ (id)newXpcConnection;
+ (id)invalidateAndGetNewXpcConnection;
@end
