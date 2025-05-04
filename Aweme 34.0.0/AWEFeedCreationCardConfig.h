@interface AWEFeedCreationCardConfig : NSObject
+ (id)legacyConfigForFeedType:;
+ (BOOL)enableWithLegacyFeedType:;
+ (long long)dailyMaxShowCountForFeedType:;
@end
