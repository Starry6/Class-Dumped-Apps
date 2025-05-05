@interface GEOUtilityService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)getHomeDirectoryPath;
- (id)getGeoServicesCacheDirectoryPath;
- (void)getCurrentGeoServicesState:callback:;
+ (void)useProxy:;
+ (id)sharedService;
@end
