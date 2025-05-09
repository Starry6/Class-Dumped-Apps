@interface CNUICoreMainWhitelistedContactsController : NSObject
@property (nonatomic) <CNUICoreFamilyMemberContactsModelFetching> modelFetcher;
@property (nonatomic) <CNUICoreContactStoreFacade> mainContactStoreFacade;
@property (nonatomic) <CNDowntimeWhitelistContainerFetching> downtimeContainerFetcher;
@property (nonatomic) <CNSchedulerProvider> schedulerProvider;
@property (nonatomic) <CNScheduler> backgroundOrImmediateScheduler;
@property (nonatomic) NSArray familyMemberContactItems;
@property (nonatomic) CNFuture familyMemberContactItemsFuture;
@property (nonatomic) CNFuture addContactsToWhitelistFuture;
@property (nonatomic) CNFuture updateContactsInWhitelistFuture;
@property (nonatomic) CNFuture deleteContactsFromWhitelistFuture;
@property (nonatomic) <CNCancelable> contactStoreDidChangeToken;
@property (nonatomic) <CNUICoreFamilyMemberContactsObserver> observer;
@property (nonatomic) q fetchStatus;
@property (nonatomic) BOOL familyMemberContainerIsEmpty;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)schedulerProvider;
- (void)setObserver:;
- (void).cxx_destruct;
- (id)observer;
- (void)updateWhitelistByAddingContacts:;
- (void)updateWhitelistByRemovingContacts:;
- (id)contactRepresentingItem:;
- (long long)fetchStatus;
- (id)familyMemberContactItems;
- (void)updateWhitelistByUpdatingContacts:;
- (void)finishWhitelistedContactsTasks;
- (BOOL)familyMemberContainerIsEmpty;
- (id)backgroundOrImmediateScheduler;
- (id)downtimeContainerFetcher;
- (void)setupChangeNotificationResponse;
- (void)setFamilyMemberContactItems:;
- (void)triggerContactItemsFetch;
- (void)cancelContactItemsFetch;
- (id)contactItemFutureFromFetcher;
- (id)modelFetcher;
- (id)mainContactStoreFacade;
- (id)familyMemberContactItemsFuture;
- (void)setFamilyMemberContactItemsFuture:;
- (id)addContactsToWhitelistFuture;
- (void)setAddContactsToWhitelistFuture:;
- (id)updateContactsInWhitelistFuture;
- (void)setUpdateContactsInWhitelistFuture:;
- (id)deleteContactsFromWhitelistFuture;
- (void)setDeleteContactsFromWhitelistFuture:;
- (id)contactStoreDidChangeToken;
- (id)initWiththOptions:mainContactStoreFacade:schedulerProvider:;
- (id)initWithModelFetcher:mainContactStoreFacade:downtimeContainerFetcher:schedulerProvider:;
+ (id)controllerWithOptions:schedulerProvider:;
@end
