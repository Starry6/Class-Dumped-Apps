@interface EDPopulateSendersTableMigrationStep : NSObject
+ (id)_combineDictionary:withDictionary:;
+ (BOOL)runWithConnection:sentMailboxURLs:contactStore:;
+ (id)_allSenderAddressIDsWithConnection:sentMailboxURLStrings:;
+ (id)_addressesForSenderIDs:withConnection:;
+ (id)_senderIDsGroupedByContactsForEmailAddressesByContact:withConnection:;
+ (BOOL)_insertSendersGroupedByContact:withConnection:;
+ (BOOL)_insertGroupedSendersWithoutContact:withConnection:;
+ (BOOL)_clearSendersTableWithConnection:;
+ (BOOL)_clearSendersAddressesTableWithConnection:;
+ (BOOL)_insertSenderWithAddresses:contact:connection:error:;
+ (id)_senderIDsGroupedByContactsForSenderAddressesToIDs:withContactStore:unmatchedEmailAddresses:otherEmailAddressesByContact:;
+ (id)_senderIDsGroupedBySimpleAddressForEmailAddresses:senderIDsByEmailAddress:;
@end
