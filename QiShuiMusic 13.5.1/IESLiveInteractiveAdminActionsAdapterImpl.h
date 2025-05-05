@interface IESLiveInteractiveAdminActionsAdapterImpl : IESLiveBaseAdapter
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)adminInviteWithUserID:secUserID:sourcePage:extraParams:;
- (void)adminKickOutUserID:secUserID:requestSource:completion:;
- (id)targetInstance;
@end
