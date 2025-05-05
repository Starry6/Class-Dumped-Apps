@interface MKAppleMediaServices : NSObject
- (void)appleMediaServicesResultsWithIdentifiers:source:completion:;
- (void)appleMediaServicesResultsWithIdentifiers:artworkSize:screenScale:type:source:completion:;
- (void)appleMediaServicesResultsWithBundleIdentifiers:source:completion:;
- (void)appleMediaServicesResultsWithBundleIdentifiers:artworkSize:screenScale:source:completion:;
- (void)appleMediaServicesResultsWithIdentifiers:bundleIdentifiers:artworkSize:screenScale:type:source:completion:;
- (void)mediaResultWithIdentifiers:bundleIdentifiers:artworkSize:screenScale:type:source:completion:;
- (long long)AMSMediaTaskTypeFromGEOAppleMediaServicesMediaType:;
- (id)additionalParameterWithType:;
- (id)externalRequestCounterRequestType;
- (id)externalRequestCounterRequestSubtypeWithType:;
+ (id)sharedInstance;
+ (id)sourceStringWithSource:;
@end
