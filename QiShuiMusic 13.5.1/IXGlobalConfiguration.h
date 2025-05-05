@interface IXGlobalConfiguration : NSObject
@property (nonatomic) NSURL daemonUserHome;
@property (nonatomic) NSURL rootPath;
@property (nonatomic) NSURL dataStorageHome;
@property (nonatomic) NSURL frameworkURL;
@property (nonatomic) NSURL userVolumeURL;
@property (nonatomic) I daemonUID;
@property (nonatomic) I daemonGID;
- (id)rootPath;
- (id)init;
- (id)dataDirectoryWithError:;
- (id)promiseStagingRootDirectoryAbortingOnError;
- (id)remoteInstallationStagingDirectory:;
- (id)removabilityDirectoryAbortingOnError;
- (id)_dataStorageHomeURLWithError:;
- (id)dataStorageHome;
- (id)userVolumeURL;
- (unsigned int)daemonGID;
- (id)frameworkURL;
- (id)promiseStagingRootDirectoryWithError:;
- (id)dataDirectoryAbortingOnError;
- (void).cxx_destruct;
- (id)daemonUserHome;
- (unsigned int)daemonUID;
- (void)createDirectories;
- (id)extractedInstallableStagingDirectory:;
- (id)removabilityDirectoryWithError:;
+ (id)sharedInstance;
@end
