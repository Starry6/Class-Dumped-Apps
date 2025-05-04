@interface AWELeftSideBarCommonUtility : NSObject
- (id)aAWEPadLeftSideBarAdapter;
+ (double)currentServerTime;
+ (id)getIronManModuleService;
+ (id)sideBarOpenOperateMethodTrackNameWithOperateMethod:;
+ (Class)aAWEPadLeftSideBarAdapterClass;
+ (id)adjustedEnterFromIfNeededForMergeProfileSideBar:;
+ (unsigned long long)channelBadgeTypeWithEntranceViewRedDotStyle:;
+ (void)tryLoginWithExtraLoginTrackParams:completion:;
+ (void)tryTransferWithSchema:withParams:identification:completion:;
+ (long long)badgeStyleFromHPBadgeStyle:;
+ (id)badgeStringStyleWithBadgeStyle:;
+ (void)monitorSideBarMethodCost:withShouldMonitor:withFinishBlock:;
+ (id)stencilViewBadgeStringStyle:;
+ (long long)getCurrentTheme:;
+ (BOOL)isSideBarModelSupportMergeProfile:;
+ (BOOL)isSideBarModelSupportNotificationShow:;
+ (BOOL)canPresentSideBarAutoRotate;
@end
