@interface IXRestoringAppInstallCoordinator : IXAppInstallCoordinator
@property (nonatomic) BOOL hasAppAssetPromise;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL hasInstallOptions;
@property (nonatomic) BOOL hasUserDataPromise;
- (id)validInstallTypes;
+ (unsigned long long)intent;
@end
