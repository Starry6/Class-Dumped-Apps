@interface CNSaveRequestVisitationTask : CNTask
@property (nonatomic) CNSaveRequest saveRequest;
@property (nonatomic) <CNChangeHistoryEventVisitorPrivate> visitor;
@property (nonatomic) CNChangeHistoryEventFactory factory;
- (id)factory;
- (id)run:;
- (void).cxx_destruct;
- (id)saveRequest;
- (id)initWithSaveRequest:visitor:factory:;
- (void)sendAddedContactEvents;
- (void)sendUpdatedContactEvents;
- (void)sendDeletedContactEvents;
- (void)sendAddedGroupEvents;
- (void)sendUpdatedGroupEvents;
- (void)sendDeletedGroupEvents;
- (void)sendAddMemberToGroupEvents;
- (void)sendRemoveMemberFromGroupEvents;
- (void)sendAddSubgroupToGroupEvents;
- (void)sendRemoveSubgroupFromGroupEvents;
- (void)sendLinkContactsEvents;
- (void)sendUnlinkContactEvents;
- (void)sendPreferredContactForNameEvents;
- (void)sendPreferredContactForImageEvents;
- (void)sendDifferentMeCardEvent;
- (id)visitor;
@end
