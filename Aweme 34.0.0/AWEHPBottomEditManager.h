@interface AWEHPBottomEditManager : NSObject
@property (nonatomic) MMKV mmkv;
@property (nonatomic) NSMutableDictionary bottomBubbleFlags;
@property (nonatomic) BOOL isBottomEditPanelShowing;
- (void)addNotifications;
- (id)currentUID;
- (void)setMmkv:;
- (id)mmkv;
- (BOOL)isSupportBottomSecondEditWithTabID:;
- (BOOL)needShowTopBubbleWithTabID:;
- (void)removeTopBubbleFlagWithTabID:;
- (BOOL)getBottomSecondTabReplaceable;
- (id)bottomBubbleFlags;
- (id)storageKeyWithUid:;
- (void)trackReplaceBottomSecondTabSuccess:currentTab:targetTab:error:;
- (id)getBottomSecondTabReplaceableListWithError:;
- (void)handleBottomEditPanelDidShow:;
- (void)handleBottomEditPanelDidHide:;
- (void)setIsBottomEditPanelShowing:;
- (BOOL)changeBottomSecondTabWithTargetTab:currentTab:;
- (BOOL)needShowBottomBubbleWithTabID:;
- (void)removeBottomBubbleFlagWithTabID:;
- (BOOL)isBottomEditPanelShowing;
- (void)setBottomBubbleFlags:;
- (id)init;
- (void)dealloc;
- (void)removeNotifications;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
