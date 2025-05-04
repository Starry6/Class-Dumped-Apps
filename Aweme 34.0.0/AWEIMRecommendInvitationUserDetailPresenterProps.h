@interface AWEIMRecommendInvitationUserDetailPresenterProps : AWEIMUIViewPresenterProps
@property (nonatomic) NSArray userIDs;
@property (nonatomic) NSArray selectedUserIDs;
@property (nonatomic) @? selectedUserIDsChanged;
- (void)setUserIDs:;
- (id)selectedUserIDs;
- (void)setSelectedUserIDs:;
- (void)setSelectedUserIDsChanged:;
- (id)selectedUserIDsChanged;
- (void).cxx_destruct;
- (id)userIDs;
@end
