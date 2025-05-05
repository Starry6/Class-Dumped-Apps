@interface AWEIMTransferUtility : NSObject
+ (void)createGroupManagementVCWithConversationID:extension:completion:;
+ (id)getCreateGroupManagementPathWithConversationID:extension:;
+ (void)p_checkAndCreateGroupManagementVCWithConversationID:extension:completion:;
+ (void)p_createGroupManagementVCWithConversationID:extension:completion:;
+ (id)p_expandExtension:nickname:alias:isCompanyProfile:;
+ (id)p_getCreateGroupManagementVCErrorWithCode:desc:;
+ (BOOL)p_isLegalGroupWithConversationId:;
+ (void)p_toCompletionErrorWithDesc:completion:;
+ (void)p_transferToMessageVCWithConversationID:conversationType:fromVC:extension:completion:;
+ (id)transferPathWithConversationID:conversationType:extension:;
+ (id)transferPathWithUid:nickname:alias:isCompanyProfile:extension:;
+ (void)transferToMessageVCWithConversationID:conversationType:fromVC:extension:completion:;
+ (void)transferToMessageVCWithUid:nickname:alias:isCompanyProfile:fromVC:completion:;
+ (void)transferToMessageVCWithUid:nickname:alias:isCompanyProfile:fromVC:showKeyboard:;
+ (void)transferToMessageVCWithUid:nickname:alias:isCompanyProfile:fromVC:showKeyboard:ext:;
+ (void)transferToMessageVCWithUid:nickname:alias:showFolloweeCount:isCompanyProfile:fromVC:;
+ (void)transferToMessageVCWithUid:nickname:alias:showFolloweeCount:isCompanyProfile:fromVC:showKeyboard:ext:completion:;
+ (BOOL)transferToSafeLinkWebViewWithUrl:fromCommerce:;
+ (void)transferToUserProfileWitUserID:secUserID:params:;
+ (id)topViewController;
+ (id)topNavigationController;
@end
