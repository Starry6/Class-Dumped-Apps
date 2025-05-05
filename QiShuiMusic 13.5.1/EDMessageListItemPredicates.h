@interface EDMessageListItemPredicates : NSObject
+ (id)predicateForMessagesFromVIPs:;
+ (id)predicateForMessagesToAddresses:;
+ (id)predicateForMessagesThatCCAddresses:;
+ (id)_predicateForRecipientMessagesAddressesKey:addresses:;
+ (id)predicateForMailboxTypePredicate:mailboxes:;
+ (id)predicateForMessagesWithObjectIDsPredicate:objectIDConverter:;
+ (id)_objectIDsFromRightExpression:;
+ (id)_predicateForAnyMailboxWithPredicate:;
+ (id)predicateForMessageIDHeaderHashPredicate:;
+ (id)predicateForAnyRecipientPredicate:;
+ (id)predicateForSenderPredicate:;
+ (id)predicateForSubjectPredicate:;
+ (id)predicateForBody:;
+ (id)predicateForSpotlightPredicate:;
@end
