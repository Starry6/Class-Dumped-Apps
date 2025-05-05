@interface CNUICoreFamilyMemberContactsModelRetriever : NSObject
@property (nonatomic) <CNUICoreContactStoreFacade> contactStore;
@property (nonatomic) <CNUICoreFamilyInfoFetching> familyInfoFetcher;
@property (nonatomic) <CNDowntimeWhitelistContainerFetching> downtimeContainerFetcher;
@property (nonatomic) CNSchedulerProvider schedulerProvider;
@property (nonatomic) <CNScheduler> backgroundOrImmediateScheduler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)allContacts;
- (id)schedulerProvider;
- (void).cxx_destruct;
- (id)contactStore;
- (id)initWithFamilyMember:schedulerProvider:;
- (id)allContactsModel;
- (id)whitelistedContactsModel;
- (id)initWithDowntimeContainerFetcher:schedulerProvider:;
- (id)initWithContactStoreFacade:familyInfoFetcher:downtimeContainerFetcher:schedulerProvider:;
- (id)backgroundOrImmediateScheduler;
- (id)modelBuilderForWhitelistedContacts:familyInfo:;
- (id)modelBuilderForContacts:familyInfo:;
- (id)familyInfoFetcher;
- (id)downtimeContainerFetcher;
+ (id)keysToFetch;
+ (long long)contactFormatterStyle;
@end
