@interface MKRoundingByteCountFormatter : NSObject
+ (id)stringFromByteCount:roundedToNearest:;
+ (long long)roundByteCount:toNearest:;
+ (id)stringFromByteCountWithRoundingTo1MB:;
+ (id)stringFromByteCountWithRoundingTo5MB:;
+ (id)stringFromByteCountWithRoundingTo10MB:;
@end
