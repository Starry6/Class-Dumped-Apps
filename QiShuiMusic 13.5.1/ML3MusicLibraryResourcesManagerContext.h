@interface ML3MusicLibraryResourcesManagerContext : NSObject
@property (nonatomic) BOOL runningInDaemon;
@property (nonatomic) BOOL multiUserSupported;
@property (nonatomic) <MLMediaLibraryResourcesServiceProtocol> resourcesService;
@property (nonatomic) <_MSVAccountInformationProviding> accountInfo;
@property (nonatomic) <MLMediaLibraryAccountChangeObserver> accountChangeObserver;
@property (nonatomic) NSString libraryContainerIdentifier;
- (id)accountInfo;
- (BOOL)isMultiUserSupported;
- (id)libraryContainerIdentifier;
- (BOOL)isRunningInDaemon;
- (id)resourcesService;
- (id)accountChangeObserver;
- (id)_initWithResourcesService:accountInfo:libraryContainerIdentifier:accountChangeObserver:supportsMultiUsers:runningInDaemon:;
- (void).cxx_destruct;
+ (id)contextForAutoupdatingSharedLibrary;
+ (id)contextForSingleUserLibraryWithAccountInfo:;
+ (id)contextForSingleUserLibraryWithLibraryContainerIdentifier:;
+ (id)contextForMultiUserFrameworkLibraryWithService:;
+ (id)contextForMultiUserDaemonLibraryWithAccountInfo:accountChangeObserver:;
@end
