@interface IDSFirewall : NSObject
@property (nonatomic) NSString service;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSSet impactedServiceIdentifiers;
- (void)setService:;
- (void)replaceEntries:withCompletion:;
- (id)impactedServiceIdentifiers;
- (void)addEntries:withCompletion:;
- (void)currentEntries:;
- (void)removeAllEntries:;
- (void)donateEntries:withCompletion:;
- (id)_removeInvalidEntries:;
- (id)service;
- (void)currentDonatedEntries:;
- (void)removeAllDonatedEntries:;
- (void)recentlyBlockedEntries:;
- (void)removeEntries:withCompletion:;
- (void).cxx_destruct;
- (void)removeDonatedEntries:withCompletion:;
- (void)replaceDonatedEntriesWithEntries:withCompletion:;
- (id)description;
- (void)setQueue:;
- (void)replaceAllEntriesWithEntries:withCompletion:;
- (id)queue;
- (void)populateImpactedServices:;
- (id)initWithService:queue:;
@end
