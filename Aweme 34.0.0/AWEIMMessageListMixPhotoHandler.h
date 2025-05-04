@interface AWEIMMessageListMixPhotoHandler : NSObject
+ (void)handleGroupActionWithConversation:withContext:;
+ (id)p_showMixPhotoPageSheetWithContext:;
+ (unsigned long long)__disableOption;
+ (void)__transferToInviteMemberWithConversationID:enterFrom:enterMethod:;
+ (void)__transferToCreateGroupWithPeerUserID:enterFrom:enterMethod:;
+ (double)__getSuperViewPanelHeight;
+ (void)showMixPhotoPageSheetWithContext:;
+ (void)handleInviteMemberTransition:;
@end
