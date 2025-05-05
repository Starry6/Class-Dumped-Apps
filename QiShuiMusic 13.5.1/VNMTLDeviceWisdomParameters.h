@interface VNMTLDeviceWisdomParameters : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)wisdomParameterForMTLDeviceWithName:error:;
- (id)wisdomParameterForMTLDevice:error:;
- (id)_wisdomResourcesPath;
- (id)_cachedMetalDeviceWisdomParametersAndReturnError:;
- (void)_flushMetalDeviceWisdomParametersCache;
@end
