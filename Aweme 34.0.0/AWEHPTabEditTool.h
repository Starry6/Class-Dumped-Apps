@interface AWEHPTabEditTool : NSObject
+ (BOOL)isSupportBottomSecondEditWithTabID:;
+ (BOOL)replaceBottomSecondToTargetTab:withBottomTab:topTab:error:;
+ (id)generateEditStructWithBottomTabList:topTabList:;
+ (BOOL)checkBottomSecondTabReplaceableList:withBottomTab:topTab:error:;
+ (id)p_generateTopTabItemWithBottomItem:;
+ (id)p_generateBottomTabItemWithTopItem:;
+ (id)bottomTabTypeToTopTabType;
+ (id)p_generateTopEditStructWithTopTabList:;
+ (id)p_generateXTabEditStructWithChannelInfo:;
@end
