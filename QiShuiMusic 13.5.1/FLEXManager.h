@interface FLEXManager : NSObject
@property (nonatomic) BOOL networkDebuggingEnabled;
@property (nonatomic) Q networkResponseCacheByteLimit;
@property (nonatomic) NSMutableArray networkRequestHostDenylist;
@property (nonatomic) BOOL simulatorShortcutsEnabled;
@property (nonatomic) BOOL hidden;
@property (nonatomic) FLEXWindow explorerWindow;
@property (nonatomic) FLEXExplorerViewController explorerViewController;
@property (nonatomic) NSMutableArray userGlobalEntries;
@property (nonatomic) NSMutableDictionary customContentTypeViewers;
@property (nonatomic) BOOL isHidden;
@property (nonatomic) FLEXExplorerToolbar toolbar;
@property (nonatomic) NSString defaultSqliteDatabasePassword;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isNetworkDebuggingEnabled;
- (void)setNetworkDebuggingEnabled:;
- (unsigned long long)networkResponseCacheByteLimit;
- (void)setNetworkResponseCacheByteLimit:;
- (id)networkRequestHostDenylist;
- (void)setNetworkRequestHostDenylist:;
- (void)setCustomViewerForContentType:viewControllerFutureBlock:;
- (void)registerGlobalEntryWithName:objectFutureBlock:;
- (void)registerGlobalEntryWithName:viewControllerFutureBlock:;
- (void)registerGlobalEntryWithName:action:;
- (void)clearGlobalEntries;
- (void)registerSimulatorShortcutWithKey:modifiers:action:description:;
- (void)setSimulatorShortcutsEnabled:;
- (BOOL)simulatorShortcutsEnabled;
- (void)registerDefaultSimulatorShortcutWithKey:modifiers:action:description:;
- (void)registerDefaultSimulatorShortcuts;
- (id)contentInsetsOfScrollView:;
- (void)tryScrollDown;
- (void)tryScrollUp;
- (id)firstScrollView;
- (void)tryGoBack;
- (id)topViewController;
- (void)toggleTopViewControllerOfClass:;
- (void)showExplorerIfNeeded;
- (id)init;
- (id)explorerWindow;
- (id)explorerViewController;
- (void)showExplorer;
- (void)hideExplorer;
- (void)toggleExplorer;
- (void)dismissAnyPresentedTools:;
- (void)presentTool:completion:;
- (void)presentEmbeddedTool:completion:;
- (void)presentObjectExplorer:completion:;
- (void)showExplorerFromScene:;
- (BOOL)isHidden;
- (id)toolbar;
- (BOOL)shouldHandleTouchAtPoint:;
- (BOOL)canBecomeKeyWindow;
- (void)explorerViewControllerDidFinish:;
- (id)defaultSqliteDatabasePassword;
- (void)setDefaultSqliteDatabasePassword:;
- (void)setExplorerWindow:;
- (void)setExplorerViewController:;
- (id)userGlobalEntries;
- (id)customContentTypeViewers;
- (void).cxx_destruct;
+ (void)registerFieldNames:forTypeEncoding:;
+ (id)sharedManager;
@end
