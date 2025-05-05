@interface PLSlalomUtilities : NSObject
+ (id)synchronouslyFetchVideoAdjustmentsFromManagedAsset:;
+ (id)videoAVObjectBuilderForManagedAsset:applyVideoAdjustments:;
+ (double)durationForManagedAsset:applyVideoAdjustments:;
+ (double)durationForBaseDuration:videoAdjustments:;
@end
