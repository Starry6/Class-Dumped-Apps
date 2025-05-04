@interface AWEPluginToolBarCustomImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isLiveCustomWithUniqueID:;
- (BOOL)isLiteLiveCustomWithUniqueID:;
- (void)tryAddRecordButtonInItems:uniqueID:;
- (void)bdp_gameCustomMorePanel:uniqueID:items:;
- (void)addGameInfoItemUniqueID:items:;
- (BOOL)bdp_shouldEnableFullCustom;
- (BOOL)bdp_shouldEnableFullCustomWithUniqueID:;
- (BOOL)bdp_shouldShowNormalPanel:;
- (id)customMorePanelModelWithUniqueID:;
- (void)bdp_customMorePanel:uniqueID:items:;
- (void)bdp_customMorePanel:uniqueID:items:extraInfo:;
+ (id)sharedPlugin;
@end
