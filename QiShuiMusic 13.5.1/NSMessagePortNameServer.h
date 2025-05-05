@interface NSMessagePortNameServer : NSPortNameServer
- (id)portForName:;
- (id)portForName:host:;
- (BOOL)registerPort:name:;
- (BOOL)removePortForName:;
+ (id)sharedInstance;
@end
