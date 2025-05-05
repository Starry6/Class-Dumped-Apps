@interface QLNavigationState : NSObject
@property (nonatomic) BOOL navigationBarHidden;
@property (nonatomic) BOOL toolBarHidden;
@property (nonatomic) BOOL translucentNavigationBar;
@property (nonatomic) BOOL translucentToolbar;
@property (nonatomic) UINavigationController navigationController;
- (id)navigationController;
- (void).cxx_destruct;
- (void)setNavigationController:;
- (void)setNavigationBarHidden:;
- (BOOL)navigationBarHidden;
- (BOOL)toolBarHidden;
- (void)setToolBarHidden:;
- (BOOL)translucentNavigationBar;
- (void)setTranslucentNavigationBar:;
- (BOOL)translucentToolbar;
- (void)setTranslucentToolbar:;
@end
