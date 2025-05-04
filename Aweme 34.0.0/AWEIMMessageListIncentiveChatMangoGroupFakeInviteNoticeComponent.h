@interface AWEIMMessageListIncentiveChatMangoGroupFakeInviteNoticeComponent : AWEIMComponentBase
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)didChangeRelationOldStatus:newStatus:;
- (void)infoOtherIncentiveChatDataHandleFinishWithCid:;
- (void)p_makeFakeInviteNotice;
- (BOOL)p_isUserHasInviteQuota;
- (BOOL)p_isConversationHasShowNotice;
- (id)p_getStorageKey;
- (BOOL)p_canShowFakeNotice;
- (void)dealloc;
+ (BOOL)canCreateComponentWithContext:;
@end
