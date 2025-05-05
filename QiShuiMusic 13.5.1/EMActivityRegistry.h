@interface EMActivityRegistry : NSObject
@property (nonatomic) EMRemoteConnection connection;
- (id)initWithRemoteConnection:;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (id)registerActivityObserver:;
+ (id)remoteInterface;
+ (id)observerInterface;
@end
