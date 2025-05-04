@interface AWEPOICommentDraftCacheSetting : NSObject
+ (long long)cleanFrequency;
+ (long long)validDays;
+ (id)settings;
+ (long long)cacheStrategy;
+ (long long)cacheCapacity;
@end
