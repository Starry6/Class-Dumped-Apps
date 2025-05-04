@interface AWEUIPreviewFloatWindowManager : NSObject
@property (nonatomic) AWEUIPreviewFloatWindow explorerWindow;
@property (nonatomic) AWEUIPreviewFloatWindowViewController explorerViewController;
@property (nonatomic) BOOL isHidden;
@property (nonatomic) @? statusChangeBlock;
- (id)explorerViewController;
- (id)explorerWindow;
- (void)setExplorerViewController:;
- (void)setExplorerWindow:;
- (void)showIfNeed;
- (id)getStoreKey;
- (id)statusChangeBlock;
- (void)windowWillResignVisible:;
- (void)updateWindowStatus:;
- (void)show;
- (void)hide;
- (BOOL)isHidden;
- (void).cxx_destruct;
- (void)setStatusChangeBlock:;
- (BOOL)isSwitchOn;
+ (id)sharedManager;
@end
