@interface IXGizmoInstallingAppInstallCoordinator : IXAppInstallCoordinator
@property (nonatomic) BOOL hasAppAssetPromise;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL hasInstallOptions;
- (id)validInstallTypes;
- (BOOL)setTargetGizmoPairingID:error:;
- (id)targetGizmoPairingIDWithError:;
+ (unsigned long long)intent;
+ (BOOL)modifiesLocalLaunchServicesDatabase;
@end
