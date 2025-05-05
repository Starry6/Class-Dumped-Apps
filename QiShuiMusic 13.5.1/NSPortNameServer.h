@interface NSPortNameServer : NSObject
- (id)portForName:;
- (id)portForName:host:;
- (BOOL)registerPort:name:;
- (BOOL)removePortForName:;
- (BOOL)registerPort:forName:;
- (id)portForName:onHost:;
+ (id)systemDefaultPortNameServer;
+ (id)defaultPortNameServer;
@end
