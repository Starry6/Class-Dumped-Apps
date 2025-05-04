@interface AWELiveModule : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)attachingDIContext;
- (void)onAppModuleWillBecomeActive;
- (void)_launchLiveService;
- (void)_launchLiveEntry;
- (void)_syncGurdLiveResources;
- (void)adapter_launchLiveEntryNormal;
- (void)_launchIdleLiveTasks;
- (void)onAppRootViewDidAppearIdle;
+ (id)moduleTaskNameArray;
@end
