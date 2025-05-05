@interface CNChangeHistoryEventCoalescer : NSObject
@property (nonatomic) NSArray events;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)visitUpdateContactEvent:;
- (void)visitAddContactEvent:;
- (id)init;
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
- (id)events;
- (void)visitLinkContactsEvent:;
- (void)visitDeleteGroupEvent:;
- (void)visitDifferentMeCardEvent:;
+ (id)coalescingLog;
+ (id)coalesceEvents:;
@end
