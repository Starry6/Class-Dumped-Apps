@interface EAEmailAddressLists : NSObject
+ (id)addressListFromHeaderValue:;
+ (id)componentsSeparatedByCommaRespectingQuotesAndParensForString:;
+ (id)componentsSeparatedByCharactersRespectingQuotesAndParens:forString:;
+ (id)addressListFromAddressString:;
+ (id)addressStringFromAddressList:;
+ (id)rawAddressListFromFullAddressList:;
+ (id)displayNameFromAddressList:;
+ (id)addressDisplayStringWithMaxNumberOfAddresses:fromAddressList:;
@end
