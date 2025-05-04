@interface AWEUGRouterHandler : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)realSchemaForRedirect:;
- (id)viewControllerForSchema:extraProps:;
- (void)transferSchema:extraProps:completion:;
- (id)bulletSchemaForOriginSchema:;
- (id)mergeContext:forSchema:;
- (BOOL)isPolarisSchema:;
- (id)polarisSchemaFromFlowerSchema:;
- (void)monitorOldFlowerSchema:scene:;
+ (BOOL)isCampaignContainerSchema:;
+ (void)transferCampaignContainerWithSchema:extraProps:completion:;
+ (void)transferWithTargetViewController:completion:;
+ (BOOL)needSwitchToUGContainer:;
+ (BOOL)isPopupSchema:;
+ (void)handleRegisterCampaignTransfer:;
+ (void)handleRegisterBulletPageType;
@end
