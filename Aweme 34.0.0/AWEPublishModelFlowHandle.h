@interface AWEPublishModelFlowHandle : NSObject
@property (nonatomic) AWEVideoPublishViewModel publishModel;
- (id)publishModel;
- (void)setPublishModel:;
- (BOOL)isNewFriendsDailyPublishPanelExperimentStatus;
- (BOOL)isNewStoryDailyPublishPageButtonStyleStatus;
- (void)saveOrignalDraftWithCompletion:;
- (void)saveHashtagWithPublishState:;
- (void)publishStep;
- (void)savePollStickerInfos;
- (void)saveDraftWithBackup:completion:;
- (BOOL)isShowToastHashTagCountLimitIfNeeded;
- (void)configForStoryWithTitlePreserve:;
- (void)configMusickSelectedFrom;
- (void)configCommon;
- (void)setHashtagFlag;
- (void)setItemDonwloadAllPeople;
- (BOOL)publishShouldShowRedPacketAlert;
- (void)markPublishRedPacketAlertShowed;
- (void)addCurrentLocationInfoWithShowPOI:;
- (BOOL)publishRedPacketDateValid;
- (BOOL)isLivePlayBack;
- (BOOL)p_isRedpacketTaskAcitivity:;
- (id)initWithModel:;
- (void).cxx_destruct;
@end
