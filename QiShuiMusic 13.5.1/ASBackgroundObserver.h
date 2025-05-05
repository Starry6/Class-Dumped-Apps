@interface ASBackgroundObserver : NSObject
@property (nonatomic) UIViewController viewController;
@property (nonatomic) @? block;
- (id)block;
- (void)dealloc;
- (void)_sceneDidEnterBackground:;
- (id)viewController;
- (void).cxx_destruct;
- (void)_hostDidEnterBackground:;
- (id)initWithViewController:block:;
@end
