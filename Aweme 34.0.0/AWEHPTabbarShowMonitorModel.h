@interface AWEHPTabbarShowMonitorModel : NSObject
@property (nonatomic) UIViewController topViewController;
@property (nonatomic) UIViewController topChildViewController;
@property (nonatomic) NSString lastHiddenSceneID;
- (id)topChildViewController;
- (void)setTopChildViewController:;
- (id)lastHiddenSceneID;
- (void)setLastHiddenSceneID:;
- (id)topViewController;
- (void).cxx_destruct;
- (void)setTopViewController:;
@end
