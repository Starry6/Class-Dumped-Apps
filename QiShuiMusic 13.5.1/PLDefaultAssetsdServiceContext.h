@interface PLDefaultAssetsdServiceContext : NSObject
@property (nonatomic) BOOL isClientAuthorizedForTCCServicePhotos;
@property (nonatomic) BOOL isClientAuthorizedForTCCServicePhotosAdd;
@property (nonatomic) NSString clientDebugDescription;
@property (nonatomic) NSError shutdownReason;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)libraryServicesManager;
- (BOOL)isClientAuthorizedForTCCServicePhotosAdd;
- (void)awaitLibraryState:completionHandler:;
- (void)invalidateClientAuthorizationCache;
- (id)clientDebugDescription;
- (id)shutdownReason;
- (BOOL)isClientAuthorizedForTCCServicePhotos;
- (void).cxx_destruct;
- (id)initWithSelector:connection:libraryBundle:connectionAuthorization:;
- (BOOL)hasEntitlement:;
@end
