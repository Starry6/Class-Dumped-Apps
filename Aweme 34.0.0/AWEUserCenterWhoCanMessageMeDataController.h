@interface AWEUserCenterWhoCanMessageMeDataController : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWEIMChatBlockSettingModel serverModel;
@property (nonatomic) q advancedSectionNumber;
@property (nonatomic) NSString beginningStatus;
@property (nonatomic) <AWEUserCenterWhoCanMessageMeUpdateDataDelegate> delegate;
@property (nonatomic) NSArray contentModels;
@property (nonatomic) NSArray sectionHeaderModels;
@property (nonatomic) AWEUserCenterWhoCanMessageMeViewModel blockMessageSettingVM;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) BOOL directlyExitPageAfterPopupDismiss;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)setServerModel:;
- (id)serverModel;
- (void)sendRequestToChangeAdvancedSetting:;
- (void)p_trackClickMessagePrivacy;
- (void)p_recordBeginningSelectValue;
- (void)prepareSectionContentData;
- (void)prepareSectionHeaderData;
- (void)addSectionHeaderWithTitle:toSectionHeaderModels:;
- (void)setSectionHeaderModels:;
- (void)setAdvancedSectionNumber:;
- (void)addSwitchesToContentModels:;
- (long long)advancedSectionNumber;
- (void)addOtherSettingToContentModels:;
- (void)addAdvancedSettingToContentModels:;
- (void)setContentModels:;
- (void)addSingleSelectItems:withModel:;
- (void)addFriendSwitchWithModel:toSwitchItems:;
- (void)addFollowSwitchWithModel:toSwitchItems:;
- (void)addMaybeKnowSwitchWithModel:toSwitchItems:;
- (void)addStrangerSwitchWithModel:toSwitchItems:;
- (void)addOfflinePushDetailToAdvancedSettingSection:;
- (void)refreshServerModel;
- (void)addSelfDefinedBlockWordViewModelToAdvancedSettingSection:;
- (void)addChatBlockToAdvancedSettingSection:;
- (void)addChatBlockDurationsToAdvancedSettingSection:;
- (void)addSmartBlockToAdvancedSettingSection:;
- (BOOL)everyOneAbleToMessage;
- (void)updateWhoCanMessageMeSingleSelect:;
- (void)updateWhoCanMessageMe;
- (void)trackMessageBlockButtonClick;
- (void)trackBlockSwitchUpdateWithOldSwitch:newSwitch:;
- (long long)advancedSection;
- (void)sendRequestToChangeAdvancedSetting:completion:;
- (void)setBlockMessageSettingVM:;
- (id)blockMessageSettingVM;
- (long long)blockDurationInDayFromSecond:;
- (void)showBlockDurarionActionSheet:;
- (id)labelModelsForBlockDurarion:halfVC:;
- (void)trackBlockDurationUpdateWithOldModel:newModel:;
- (void)p_trackSmartBlockWithUpdateTypeIsAdd:smartBlockType:;
- (void)updateSelectedViewModel:;
- (id)selectValueToSwitchValues:;
- (id)selectValueToSwitchValuesV2:;
- (long long)currentSelectedValue;
- (void)revertSelectValue;
- (void)showErrorToast:;
- (id)contentModels;
- (id)currentSwitchValues;
- (void)revertSwitchValues;
- (id)trackParamFromWhoCanMessageMeModel:;
- (void)setBeginningStatus:;
- (id)beginningStatus;
- (id)p_valueForSwitch:inCurrentSwitchValues:;
- (void)p_trackBlockDurationUpdate:;
- (void)autoSetIfNotNobodySetting;
- (void)trackSwitchValues;
- (void)p_trackSwitchEvents:;
- (id)sectionHeaderModels;
- (BOOL)directlyExitPageAfterPopupDismiss;
- (void)setDirectlyExitPageAfterPopupDismiss:;
- (void)dealloc;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)prepareData;
+ (id)settingSearchRegisterDic;
+ (unsigned long long)itemStatusWithSettingItem:;
+ (BOOL)enableUnifyViewController;
+ (BOOL)enablePrivacySettingOpt;
+ (id)whoCanMessageMeTitle;
+ (BOOL)onlyShowSelfDefinedBlockWord;
+ (BOOL)enableWhoCanMsgMeAddMate;
+ (BOOL)enablePrivacySettingNobody;
+ (id)offlinePushDetailTitle;
+ (BOOL)blockMessageEnable;
@end
