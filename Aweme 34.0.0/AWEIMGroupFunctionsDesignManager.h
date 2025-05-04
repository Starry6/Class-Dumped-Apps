@interface AWEIMGroupFunctionsDesignManager : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)__groupManagementPageSectionModelsWithConversation:;
- (id)__chatDetailMainFunctionsAreaSectionModels;
- (id)__chatDetailSubFunctionsAreaSectionModels;
- (id)__chatDetailMoreFunctionsPanelSectionModels;
- (BOOL)shouldEnableGroupFunctionType:permissionType:withDesignContext:;
- (BOOL)__canShowGroupCardInProfile;
- (BOOL)__canShowLiveWindowTopSellerAutoSyncSwitchWithConversation:;
- (BOOL)__shouldDisableFunctionByTransferGroupWithConversation:featureType:;
- (id)__sectionModelWithTitle:functionTypes:;
- (id)__groupManagementPageSectionModelsByFansGroupStyle;
- (id)__groupManagementPageSectionModelsByDefault;
- (id)modifiedSectionModelsWithDesignContext:;
+ (BOOL)__canShowAccessGroupHistoryEntryByABControllWithConversation:;
+ (BOOL)shouldUseFansGroupSortStyleWithConversation:;
+ (BOOL)__isMatrixGroupWithConversation:;
+ (BOOL)__isEnableAccessGroupHistoryByABControllType:;
+ (id)sharedManager;
@end
