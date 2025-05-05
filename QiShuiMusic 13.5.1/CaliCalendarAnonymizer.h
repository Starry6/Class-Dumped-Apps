@interface CaliCalendarAnonymizer : NSObject
+ (void)dump;
+ (id)sharedAnonymizedStrings;
+ (id)sharedAnonymizedStringsCount;
+ (id)sharedAnonymizedDomainName;
+ (id)anonymizedString:withAnonymizer:;
+ (id)anonymizedString:;
+ (id)anonymizedSummary:;
+ (id)anonymizedDescription:;
+ (id)anonymizedUID:;
+ (id)anonymizedURNUID:;
+ (id)anonymizedEmailCommonName:;
+ (id)anonymizedEmail:;
+ (id)anonymizedLocation:;
+ (id)anonymizedPhoneNumber:;
+ (id)anonymizedWebURL:;
+ (id)anonymizedAddressURL:;
@end
