@interface PLAssetsdService : NSObject
@property (nonatomic) NSURL libraryURL;
@property (nonatomic) PLLibraryServicesManager libraryServicesManager;
@property (nonatomic) BOOL isPhotosClient;
@property (nonatomic) PLCacheMetricsCollectorServerShell cacheMetricsShellObject;
@property (nonatomic) NSString stateDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)libraryServicesManager;
- (void)handleInvalidation;
- (id)permissionsForResourceInternalService;
- (void)getSyncServiceWithReply:;
- (id)libraryURL;
- (id)newCloudInternalService;
- (id)permissionsForNotificationService;
- (void)getPhotoKitAddServiceWithReply:;
- (id)newMigrationService;
- (void)invalidateConnectionWithReason:;
- (long long)requiredStateForPhotoKitAddService;
- (id)permissionsForLibraryInternalService;
- (id)permissionsForLibraryManagementService;
- (void)bindToPhotoLibraryURL:sandboxExtension:clientOptions:withReply:;
- (void)bindToPhotoLibraryURL:sandboxExtension:withReply:;
- (void)getPhotoKitServiceWithReply:;
- (long long)requiredStateForResourceInternalService;
- (id)permissionsForPhotoKitService;
- (id)permissionsForPrivacySupportService;
- (long long)requiredStateForResourceWriteOnlyService;
- (id)permissionsForSyncService;
- (id)newResourceInternalService;
- (id)permissionsForCloudService;
- (BOOL)_prepareToRunDaemonJob:error:;
- (id)newLibraryService;
- (id)permissionsForDemoService;
- (id)_waitForLibraryServicesForDaemonJob;
- (long long)requiredStateForLibraryManagementService;
- (long long)requiredStateForResourceAvailabilityService;
- (id)newDiagnosticsService;
- (long long)requiredStateForResourceService;
- (id)permissionsForSystemLibraryURLReadOnlyService;
- (id)clientDebugDescription;
- (void)getMigrationServiceWithReply:;
- (void)getSystemLibraryURLReadOnlyServiceWithReply:;
- (long long)requiredStateForMigrationService;
- (long long)requiredStateForDebugService;
- (long long)requiredStateForCloudService;
- (void)getLibraryServiceWithReply:;
- (void)getResourceWriteOnlyServiceWithReply:;
- (void)getDemoServiceWithReply:;
- (void)getResourceInternalServiceWithReply:;
- (id)initWithConnection:libraryBundleController:;
- (id)newPhotoKitService;
- (id)_photoLibrary;
- (long long)requiredStateForDiagnosticsService;
- (void)getResourceServiceWithReply:;
- (id)newCloudService;
- (void)getLibraryInternalServiceWithReply:;
- (void)runDaemonJob:isSerial:withReply:;
- (long long)requiredStateForLibraryInternalService;
- (void)getDebugServiceWithReply:;
- (void)getLibraryManagementServiceWithReply:;
- (id)resourceDownloader;
- (void).cxx_destruct;
- (void)photoLibraryDeletedAtURL:reply:;
- (long long)requiredStateForCloudInternalService;
- (void)getResourceAvailabilityServiceWithReply:;
- (id)stateDescription;
- (id)description;
- (id)newResourceWriteOnlyService;
- (void)getDiagnosticsServiceWithReply:;
- (id)newResourceAvailabilityService;
- (id)permissionsForPhotoKitAddService;
- (void)getCloudServiceWithReply:;
- (id)newSyncService;
- (id)permissionsForResourceAvailabilityService;
- (id)newSystemLibraryURLReadOnlyService;
- (id)newDemoService;
- (void)getCloudInternalServiceWithReply:;
- (id)permissionsForLibraryService;
- (id)newLibraryInternalService;
- (void)getPrivacySupportServiceWithReply:;
- (id)cacheMetricsShellObject;
- (long long)requiredStateForLibraryService;
- (id)newDebugService;
- (id)permissionsForCloudInternalService;
- (id)permissionsForMigrationService;
- (id)serviceContextWithSelector:;
- (long long)requiredStateForPrivacySupportService;
- (id)permissionsForResourceWriteOnlyService;
- (id)permissionsForDebugService;
- (long long)requiredStateForSyncService;
- (id)newResourceService;
- (long long)requiredStateForNotificationService;
- (void)runDaemonJob:isSerial:;
- (BOOL)isPhotosClient;
- (id)newPrivacySupportService;
- (id)newPhotoKitAddService;
- (void)handleInterruption;
- (long long)requiredStateForPhotoKitService;
- (long long)requiredStateForSystemLibraryURLReadOnlyService;
- (id)permissionsForResourceService;
- (id)newNotificationService;
- (id)newLibraryManagementService;
- (void)getNotificationServiceWithReply:;
- (id)permissionsForDiagnosticsService;
- (long long)requiredStateForDemoService;
+ (id)autoCreateWellKnownPhotoLibraryIfNeededWithURL:wellKnownLibraryIdentifier:;
@end
