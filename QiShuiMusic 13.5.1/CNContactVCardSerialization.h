@interface CNContactVCardSerialization : NSObject
+ (void)dataWithContacts:options:completionHandler:;
+ (id)contactsWithMECARDString:error:;
+ (id)descriptorForRequiredKeysWithOptions:description:;
+ (id)summaryOfLocationVCard:error:;
+ (id)summaryOfVCard:error:;
+ (id)descriptorForRequiredKeys;
+ (id)dataWithContacts:options:error:environment:;
+ (id)dataWithContacts:error:;
+ (id)contactsWithData:options:error:;
+ (void)dataWithContacts:options:scheduler:completionHandler:;
+ (id)contactsWithData:error:;
+ (void)logWritingContactsToVCard:options:logger:;
+ (void)contactsWithData:completionHandler:;
+ (id)descriptorForRequiredKeysWithOptions:;
+ (void)contactsWithData:scheduler:completionHandler:;
+ (id)dataWithContacts:options:error:;
@end
