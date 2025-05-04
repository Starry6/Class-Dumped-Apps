@interface AWEIMMessageListBulletTrackerComponent : AWEIMComponentBase
@property (nonatomic) <AWEIMMessageVisibleCellInterface> visibleCellService;
@property (nonatomic) <AWEIMPageEnvironmentMonitorInterface> monitorService;
@property (nonatomic) NSMutableDictionary effectMemoryCardKeys;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (id)monitorService;
- (void)setMonitorService:;
- (void)setEffectMemoryCardKeys:;
- (id)bulletTrackInfo;
- (void)setVisibleCellService:;
- (id)p_trackMemorySourceInfo;
- (id)p_bulletTrackInfo;
- (void)p_initialMemoryBulletInfo;
- (void)p_recordBulletInfoWithSchema:;
- (void)p_removeBulletInfoWithSchema:;
- (id)effectMemoryCardKeys;
- (id)visibleCellService;
- (id)init;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void).cxx_destruct;
- (void)tableView:didEndDisplayingCell:forRowAtIndexPath:;
+ (BOOL)canCreateComponentWithContext:;
@end
