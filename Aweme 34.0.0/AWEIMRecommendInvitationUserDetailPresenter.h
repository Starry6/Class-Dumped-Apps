@interface AWEIMRecommendInvitationUserDetailPresenter : AWEIMUIViewPresenter
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createViewWithContext:;
- (void)updateView:withContext:;
- (void)recommendUserDetailView:selectedUserChanged:;
@end
