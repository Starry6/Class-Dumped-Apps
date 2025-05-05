@interface CNEmailAddressUtilities : NSObject
+ (id)expandAliasedDomainsInAddress:;
+ (id)aliasedDomains;
+ (id)safeUserVisibleEmailAddress:;
+ (BOOL)isStringEmailAddress:;
+ (id)makeEmailRegex;
@end
