@interface CNUICoreFamilyInfoRetriever : NSObject
@property (nonatomic) <CNUICoreContactStoreFacade> mainContactStore;
@property (nonatomic) FAFetchFamilyCircleRequest fetchFamilyCircleRequest;
@property (nonatomic) <CNSchedulerProvider> schedulerProvider;
@property (nonatomic) BOOL matchFamilyMembersWithContacts;
@property (nonatomic) CNFuture familyFuture;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)schedulerProvider;
- (void).cxx_destruct;
- (id)mainContactStore;
- (id)familyInfo;
- (id)initWithMainContactStoreFacade:matchFamilyMembersWithContacts:schedulerProvider:;
- (id)initWithMainContactStoreFacade:fetchFamilyCircleRequest:matchFamilyMembersWithContacts:schedulerProvider:;
- (id)createFamilyFuture;
- (id)fetchFamilyCircleRequest;
- (BOOL)matchFamilyMembersWithContacts;
- (id)familyFuture;
- (void)setFamilyFuture:;
+ (id)keysToFetch;
+ (id)meContactFromStore:schedulerProvider:;
+ (id)familyCircleFromRequest:schedulerProvider:;
+ (id)familyInfoWithFamilyMembers:meContact:;
+ (id)familyInfoWithFamilyMembers:meContact:matchedWithContactsInContactStore:;
+ (id)contactsMatchingFamilyMember:inContactStore:;
@end
