@interface BWEspressoInferenceAdapter : NSObject
- (id)inferenceProvidersForType:version:configuration:resourceProvider:status:;
- (id)inferenceProviderForType:version:configuration:resourceProvider:status:;
+ (id)espressoNetworkURLForPlatformedResourceBaseName:embedPlatformOrDeviceID:;
+ (id)findAvailableVersion:defaultOverrideKey:versionLocator:;
+ (id)locateNetworkFileFromFormat:defaultOverrideKey:version:;
@end
