@interface NSMachBootstrapServer : NSPortNameServer
- (id)portForName:;
- (id)portForName:host:;
- (BOOL)registerPort:name:;
- (BOOL)removePortForName:;
- (id)portForName:options:;
- (id)servicePortWithName:;
+ (id)sharedInstance;
@end
