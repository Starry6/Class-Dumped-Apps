@interface AWECloseFriendsButtonHelper : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canOpenCloseFriendsListPanel;
- (id)profileMenuAddButtonTitle;
- (id)profileMenuRemoveButtonTitle;
- (id)profileMenuAddButtonImage;
- (id)profileMenuRemoveButtonImage;
- (BOOL)profileMenuShouldShowAddButtonWithType:;
- (id)profileMenuButtonSelectTitleWithType:;
- (void)didTapProfileMenuButtonWithType:userID:completion:;
- (void)didTapSettingsPanelChooseButtonWithSelectedUids:completion:;
- (void)configureProfileRelationView:context:;
- (BOOL)canShowCloseFriendsEntryInProfileMenuWithUser:oldRelationCanShow:;
- (BOOL)p_splitMateAndFollow;
- (id)p_profileCloseFriendsState:context:;
- (id)p_transitionToCloseFriends:context:;
- (id)p_autoSize:;
@end
