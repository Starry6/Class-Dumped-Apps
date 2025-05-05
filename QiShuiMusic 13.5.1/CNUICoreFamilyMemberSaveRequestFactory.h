@interface CNUICoreFamilyMemberSaveRequestFactory : NSObject
+ (id)saveRequestToUpdateContactListByAddingContacts:;
+ (id)saveRequestToUpdateContactListByAddingContacts:toContainer:;
+ (id)saveRequestToUpdateContactListByUpdatingContacts:;
+ (id)saveRequestToUpdateContactListByRemovingContacts:;
+ (id)saveRequestToupdateContactWhitelistByAddingContacts:;
+ (id)saveRequestToUpdateContactWhitelistByRemovingContacts:;
+ (id)distinctCopiesOfContacts:;
@end
