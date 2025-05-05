@interface PPUtils : NSObject
+ (id)osBuild;
+ (BOOL)isInternalDevice;
+ (BOOL)localizedTimeStructForDate:tm:;
+ (id)currentLocaleLanguageCode;
+ (id)Sha256ForData:withSalt:;
+ (id)reduceSpotlightDomainIdentifiers:;
+ (BOOL)isFirstPartyApp:;
+ (id)hexUUID;
+ (id)coordinatesToGeoHashWithLength:latitude:longitude:;
+ (long long)reverseCompareDouble:withDouble:;
+ (void)enumerateChunksOfSize:fromArray:usingBlock:;
+ (id)preferredLanguages;
+ (id)hexOfBytes:size:;
+ (id)sqliteGlobEscape:;
+ (double)jaroSimilarityForString:other:;
+ (BOOL)localizedTimeStructForSecondsFrom1970:tm:;
+ (long long)compareDouble:withDouble:;
+ (BOOL)yesWithProbability:;
+ (id)formatStringArray:truncatingAtLength:;
@end
