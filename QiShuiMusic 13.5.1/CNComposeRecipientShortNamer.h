@interface CNComposeRecipientShortNamer : NSObject
+ (id)os_log;
+ (id)shortNameFromNameComponentsForComposeRecipient:;
+ (id)shortNameFromDisplayStringForComposeRecipient:;
+ (id)shortNameFromUserNameInEmailAddressForComposeRecipient:;
+ (id)shortNameFromAddressForComposeRecipient:;
@end
