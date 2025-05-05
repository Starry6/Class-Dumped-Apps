@interface CNUICoreFamilyMemberContactsStore : NSObject
@property (nonatomic) <CNUICoreContactStoreFacade> familyMemberScopedContactStore;
@property (nonatomic) FAFamilyMember familyMember;
@property (nonatomic) <CNUICoreContactsSyncTrigger> contactsSyncTrigger;
@property (nonatomic) <CNSchedulerProvider> schedulerProvider;
@property (nonatomic) <CNScheduler> backgroundOrImmediateScheduler;
- (id)init;
- (id)schedulerProvider;
- (void).cxx_destruct;
- (id)initWithFamilyMember:schedulerProvider:;
- (id)familyMember;
- (id)familyMemberScopedContactStore;
- (id)backgroundOrImmediateScheduler;
- (id)updateContactListByAddingContacts:;
- (id)updateContactListByUpdatingContacts:;
- (id)updateContactListByRemovingContacts:;
- (id)updateContactWhitelistByAddingContacts:;
- (id)updateContactWhitelistByRemovingContacts:;
- (id)initWithFamilyMemberScopedContactStoreFacade:familyMember:contactsSyncTrigger:schedulerProvider:;
- (void)triggerContactsSyncRequest;
- (id)contactsInsertedIntoFamilyMemberContainerIfMissingFuture:preserveEditsToProvidedContactsOverContactsFoundInFamilyMemberStore:;
- (id)contactsFoundAndNotFoundInFamilyMemberContainerFuture:;
- (id)contactsSyncTrigger;
@end
