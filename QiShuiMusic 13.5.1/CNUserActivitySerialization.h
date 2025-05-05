@interface CNUserActivitySerialization : NSObject
+ (id)descriptorForRequiredKeys;
+ (id)fullNameForContact:;
+ (id)userActivityPayloadWithContacts:shouldUnify:;
+ (id)userActivityTitleWithContacts:;
+ (BOOL)isContactACompany:;
+ (id)allAvailableServerUUIDsForContact:;
+ (id)distinctEmailAddressesForContact:;
+ (id)distinctPhoneNumbersForContact:;
@end
