@interface CNGameCenterAddFriendAction : CNContactAction
- (id)title;
- (void)performActionWithSender:;
- (void)addContactAsFriend:;
- (void)createInviteFriendViewControllerForContact:completionHandler:;
- (id)contactPerHandleForContact:;
- (id)actionTitleForContact:;
- (id)addFriendsMenuProvider;
@end
