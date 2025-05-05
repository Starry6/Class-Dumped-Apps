@interface SSDistributedNotificationCenter : NSObject
@property (nonatomic) NSString namedPort;
- (void)removeObserver:;
- (id)init;
- (void)dealloc;
- (id)addObserverForName:queue:usingBlock:;
- (void)_distributedNotificationMessage:connection:;
- (id)initWithNamedPort:;
- (id)namedPort;
- (void)_sendRegistrationMessage:name:;
@end
