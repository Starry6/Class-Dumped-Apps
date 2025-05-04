@interface AWEMRCommonSubscribeModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)transferCommonSubscribeManageWithEnterFrom:;
- (void)transferCommonSubscribeManageDetailWithEnterFrom:serviceAccountId:serviceAccountName:;
- (id)viewControllerWithServiceAccountModel:enterFrom:;
- (BOOL)enableCommonSubscribeManageEntrance;
@end
