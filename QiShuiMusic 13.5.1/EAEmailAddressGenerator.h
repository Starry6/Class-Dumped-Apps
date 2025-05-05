@interface EAEmailAddressGenerator : NSObject
+ (id)formattedAddressWithName:email:useQuotes:;
+ (id)stringByTrimmingCommasSpacesQuotesFromString:;
@end
