@interface AWEContactsModuleService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showAddressListAuthorizationOnLiveViewController:;
- (void)uploadAddressBookOnView:isPresented:request:load:completion:;
- (void)uploadAddressBookOnView:isPresented:request:load:trackParams:completion:;
- (id)uploadContactAlertViewControllerWithParamsDict:;
- (void)showUploadContactsAlertWithEnterFrom:actionBlock:cancelBlock:;
- (void)showUploadContactsAlertWithEnterFrom:actionBlock:cancelBlock:completion:;
- (BOOL)isShowingAddressListAlert;
- (BOOL)isShowingContactsAlert;
- (BOOL)isDouyinContactsAlert:;
- (id)contactsAlertManager;
- (BOOL)canShowContactFriendsCellCommonCondition;
- (Class)contactsAlertManagerClass;
- (id)addressBookAuthorizationGuide:;
- (BOOL)shouldOptimizeContactsAfteriOS18;
- (void)debugShowColdLaunchDouyinContactAlert;
- (id)aweAddressBookManager;
- (id)userRecommendManager;
- (Class)contactsColdLaunchManagerClass;
- (void)showActiveContactAlert:params:;
- (void)addActiveContactAlert:params:;
- (Class)contactsTrackManager;
- (id)findFriendsLoginGuideAlert;
@end
