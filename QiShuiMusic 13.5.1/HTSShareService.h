@interface HTSShareService : HTSService
@property (nonatomic) NSDictionary shareActions;
@property (nonatomic) NSMutableDictionary mutableShareActions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)actionForPlatform:;
- (BOOL)isPlatformAvailable:;
- (BOOL)isPlatformInstalled:;
- (id)mutableShareActions;
- (void)onServiceInit;
- (BOOL)openAppWithPlatform:;
- (void)registerAction:forPlatform:;
- (void)registerAction:forPlatforms:;
- (void)setShareActions:;
- (id)shareActions;
- (void)shareWithModel:toPlatform:completion:;
- (void).cxx_destruct;
- (BOOL)handleOpenURL:;
@end
