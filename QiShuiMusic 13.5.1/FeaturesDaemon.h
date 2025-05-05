@interface FeaturesDaemon : NSObject
@property (nonatomic) DaemonController controller;
- (id)init;
- (void)start;
- (void)setController:;
- (void).cxx_destruct;
- (id)controller;
+ (id)sharedInstance;
@end
