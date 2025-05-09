@interface AWEProfileMenuFunctionManager : NSObject
+ (BOOL)canShowHideMyPostCellForUser:;
+ (BOOL)canShowHideHerPostCellForUser:;
+ (BOOL)profileMenuItemsReorder;
+ (BOOL)determineUserFollowing:;
+ (BOOL)canShowAddMateCellForUser:enterFrom:;
+ (BOOL)canShowApproveMateCellForUser:;
+ (long long)profileMenuContentStrategy;
+ (id)profileMenuItemOrdererArrayForClickMoreWithEnableTopUser:;
+ (id)profileMenuItemOrdererArrayForClickUnFollowWithEnableTopUser:;
+ (id)profileMenuItemOrdererArrayForClickFriendsList;
+ (id)profileMenuItemOrdererArrayForClickFollowListWithEnableTopUser:;
+ (id)profileMenuItemOrdererArrayForAvatarEntrance;
+ (id)profileMenuItemOrdererArrayForUserRecentUpdateList;
+ (id)profileMenuItemOrdererArrayForClickSearchListWithEnableTopUser:;
+ (id)profileMenuItemOrdererArrayForFansList;
+ (id)profileMenuItemOrdererArrayForRelationManage;
+ (BOOL)canShowShareCellForUser:;
+ (BOOL)canShowIMChatCellForUser:;
+ (BOOL)canShowBlockCellForUser:;
+ (BOOL)canShowReportCellForUser:;
+ (BOOL)canShowPushUpdateCellForUser:;
+ (BOOL)canShowLookWorksCellForUser:;
+ (BOOL)canShowSetAliasCellForUser:;
+ (BOOL)canShowTAIsFriendCellForUser:;
+ (BOOL)canShowRemoveFansCellForUser:;
+ (BOOL)canShowPigeonForUser:;
+ (BOOL)canShowUnFollowCellForUser:;
+ (BOOL)canShowCancelFollowRequestModelCellForUser:;
+ (BOOL)canShowGoodsServiceCellForUser:;
+ (BOOL)canShowPOIGoodsServiceCellForUser:;
+ (BOOL)canShowTopFollowListCellForUser:;
+ (BOOL)canShowSetGroupCellForUser:;
+ (BOOL)canShowBellPushCellForUser:;
+ (BOOL)canShowAppliedMateCellForUser:;
+ (BOOL)canShowRemoveMateCellForUser:;
+ (BOOL)canShowFollowCellForUser:enterFrom:;
@end
