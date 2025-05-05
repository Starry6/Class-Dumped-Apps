@interface AWEIMShareServiceUtils : NSObject
+ (BOOL)p_showTransportVCForAwemeModel:;
+ (BOOL)shouldShowTranspondWithContext:;
+ (BOOL)showIMShareView;
+ (BOOL)showTransportVC;
+ (void)transferToAppInternalWithModel:;
+ (id)filterTranspondIMShareModelListIfNeeded:;
+ (BOOL)isAwemeAuthorPrivate:;
+ (BOOL)p_showIMShareViewWithFollowingCount:;
+ (void)setLastSelectedShareTypeAsIM;
+ (id)shareListLandscapeURLSchemaPrefix;
+ (id)shareListURLSchemaPrefix;
+ (id)shareListViewControllerWithModel:;
+ (BOOL)shouldShowIMShare;
+ (BOOL)shouldShowTranspondInFriendVisibleWithAwemeModel:;
+ (void)transferToAllFriendsListWithInviteBlock:;
+ (void)transferToCreateChatWithContext:authorShareNotPublicAweme:enterMethod:multiSelectedItems:replayContent:;
+ (void)transferToCreateChatWithContext:authorShareNotPublicAweme:enterMethod:multiSelectedItems:replayContent:fromOpenPlatform:openPlatformShareCompletion:;
+ (void)transferToShareListWithModel:;
@end
