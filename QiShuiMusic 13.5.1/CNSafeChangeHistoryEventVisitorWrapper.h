@interface CNSafeChangeHistoryEventVisitorWrapper : NSObject
@property (nonatomic) <CNChangeHistoryEventVisitor> visitor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)visitUpdateContactEvent:;
- (void)visitAddContactEvent:;
- (void)visitDeleteContactEvent:;
- (void)visitDropEverythingEvent:;
- (void)visitUpdateGroupEvent:;
- (void)visitRemoveMemberFromGroupEvent:;
- (void)visitAddSubgroupToGroupEvent:;
- (void)visitAddGroupEvent:;
- (void)visitUnlinkContactEvent:;
- (void)visitAddMemberToGroupEvent:;
- (void)visitPreferredContactForNameEvent:;
- (void)visitPreferredContactForImageEvent:;
- (void)visitRemoveSubgroupFromGroupEvent:;
- (void).cxx_destruct;
- (void)visitLinkContactsEvent:;
- (id)description;
- (void)visitDeleteGroupEvent:;
- (void)visitDifferentMeCardEvent:;
- (id)visitor;
- (id)initWithChangeHistoryEventVisitor:;
@end
