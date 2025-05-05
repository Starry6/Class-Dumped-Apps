@interface GEOUtilityServiceRemoteProxy : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getHomeDirectoryPath;
- (id)getGeoServicesCacheDirectoryPath;
- (void)getCurrentGeoServicesState:callback:;
- (id)_getPathSynchronous:;
@end
