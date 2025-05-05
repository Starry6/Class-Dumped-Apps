@interface CNUIFamilyMemberControllerShared : NSObject
+ (id)formattedNameOfFamilyMember:;
+ (id)contactViewControllerForContact:fromStore:;
+ (id)contactMatchingFamilyMemberContactItem:fetchedFromContactStore:schedulerProvider:;
+ (id)addContactsOptionsSheetForFamilyMember:delegate:;
+ (id)addContactsToWhitelistOptionsSheetForFamilyMember:offerChooseFromFamilyMemberContactsOption:delegate:;
+ (id)actionTitleAddNewContactForFamilyMember:;
+ (id)actionTitleChooseFromContactsForFamilyMember:;
+ (long long)contactsUIFetchStatusFromContactsUICoreFetchStatus:;
@end
