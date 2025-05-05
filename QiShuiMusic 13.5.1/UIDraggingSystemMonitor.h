@interface UIDraggingSystemMonitor : NSObject
@property (nonatomic) NSSet sessions;
@property (nonatomic) <UIDraggingSystemMonitorDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)sessions;
- (void)setDelegate:;
- (id)delegate;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (id)_init;
- (id)dragDidBeginWithSystemSession:info:reply:;
- (id)dragDidEndWithSystemSession:;
- (id)sessionForDropSession:;
- (BOOL)xpcQueue_shouldAcceptNewConnection:;
- (void)xpcQueue_acceptNewConnection:;
+ (id)new;
+ (id)sharedInstance;
@end
