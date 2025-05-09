@interface AWEMessageReachSideBarPlugin : NSObject
@property (nonatomic) <AWEHPChannelControllerProtocol> channelController;
@property (nonatomic) BOOL topTabDidAppear;
@property (nonatomic) BOOL topTabHidden;
@property (nonatomic) <AWEMessageReachTabVisibilityChangedResult> lastVisibilityResult;
@property (nonatomic) NSMutableArray blockArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)channelController;
- (void)setChannelController:;
- (void)channelTopTabContainerDidAppear;
- (void)channelTopTabContainerDidDisappear;
- (id)blockArray;
- (void)setBlockArray:;
- (void)channelTopSegmentControllHidden:;
- (BOOL)canShowBubble;
- (BOOL)needUpdateWithCurrentResult:;
- (void)setLastVisibilityResult:;
- (BOOL)isSideBarEntranceVisible;
- (BOOL)topTabDidAppear;
- (BOOL)topTabHidden;
- (id)lastVisibilityResult;
- (void)setTopTabDidAppear:;
- (void)updateSideBarEntranceVisibilityStatus;
- (void)setTopTabHidden:;
- (void)addSideBarEntranceVisibilityChanged:;
- (void)removeSideBarEntranceVisibilityCallBack;
- (void)dealloc;
- (void)addObserver;
- (void)applicationDidEnterBackground;
- (void)removeObserver;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
+ (id)sharePlugin;
@end
