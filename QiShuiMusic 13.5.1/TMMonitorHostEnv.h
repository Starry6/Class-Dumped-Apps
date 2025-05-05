@interface TMMonitorHostEnv : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isEventBlocked:;
- (id)crossPlatformCallingInfos;
- (id)extraBizInfoWithGuardScene:permissionType:;
- (id)extraCommonBizInfoWithGuardScene:permissionType:;
- (id)urlIfTopIsWebViewController;
- (id)userRegion;
@end
