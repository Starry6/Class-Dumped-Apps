@interface EFPrivacy : NSObject
+ (id)ec_partiallyRedactedStringForSubjectOrSummary:;
+ (id)ec_redactedStringForMailboxURL:;
+ (id)ec_partiallyRedactedStringForAddress:localPart:domain:;
+ (id)_redactedMailboxPathForMailboxPath:;
+ (BOOL)_isWellKnownMailboxName:;
+ (id)fullyRedactedStringForString:;
+ (id)partiallyRedactedStringForString:;
+ (id)dateByRemovingTimeComponentsFromDate:;
+ (long long)weeksSinceDate:;
+ (long long)bucketedMessageAgeSinceDate:leadingDigits:;
+ (long long)bucketedNumber:leadingDigits:;
+ (id)partiallyRedactedStringForString:maximumUnredactedLength:;
+ (id)partiallyRedactedStringFromArray:;
+ (id)partiallyRedactedDictionary:;
+ (unsigned int)bucketMessageCount:;
@end
