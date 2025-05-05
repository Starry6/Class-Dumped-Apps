@interface MRDestinationResolverDependencies : NSObject
- (void)resolvePlayerPath:queue:completion:;
- (void)createPlayerPathForEndpoint:client:player:queue:completion:;
- (void)retrieveEndpointForContextUID:queue:completion:;
- (void)retrieveEndpointForUID:endpointGroupUID:queue:completion:;
- (void)retrieveOutputDeviceUIDForOrigin:queue:completion:;
- (id)addPlayerPathInvalidationHandler:queue:handler:;
- (void)removePlayerPathInvalidationHandler:;
- (id)createEndpointObserverWithUID:;
+ (id)defaultDependencies;
@end
