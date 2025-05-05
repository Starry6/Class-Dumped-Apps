@interface FBSDisplayLayoutMonitorConfiguration : NSObject
@property (nonatomic) BSServiceConnectionEndpoint endpoint;
@property (nonatomic) BOOL needsUserInteractivePriority;
@property (nonatomic) @? transitionHandler;
- (id)init;
- (void)setTransitionHandler:;
- (id)_initWithEndpoint:;
- (BOOL)needsUserInteractivePriority;
- (void)setNeedsUserInteractivePriority:;
- (id)transitionHandler;
- (void).cxx_destruct;
- (id)endpoint;
+ (id)configurationForDefaultMainDisplayMonitor;
+ (id)configurationWithEndpoint:;
@end
