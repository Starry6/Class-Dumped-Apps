@interface IXInitiatingAppInstallCoordinator : IXAppInstallCoordinator
@property (nonatomic) BOOL hasAppAssetPromise;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL hasInstallOptions;
@property (nonatomic) BOOL hasInitialODRAssetPromises;
- (id)validInstallTypes;
+ (unsigned long long)intent;
@end
