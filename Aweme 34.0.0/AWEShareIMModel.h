@interface AWEShareIMModel : NSObject
@property (nonatomic) BOOL disableIMSendVideoSuccessTracker;
@property (nonatomic) <IESIMShareIMPerformanceTrackModelProtocol> sharePanelPerformanceTrackModel;
@property (nonatomic) NSDictionary imExtra;
@property (nonatomic) @? showCustomTipsAfterSendMessage;
@property (nonatomic) BOOL disableCreateGroupSuccessToast;
@property (nonatomic) q panelType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSMutableSet trackChatShowSet;
@property (nonatomic) NSMutableSet trackRecentlyChatShowSet;
@property (nonatomic) BOOL hidesIMContacts;
@property (nonatomic) BOOL disableIMSendVideoSuccessTracker;
@property (nonatomic) BOOL shouldIgnoreDuoshanStrategy;
@property (nonatomic) BOOL showingInverseShareUserIcon;
@property (nonatomic) BOOL hideToast;
@property (nonatomic) NSString customToast;
@property (nonatomic) BOOL separateMsg;
@property (nonatomic) AWEShareIMQuickInputConfig quickInputConfig;
@property (nonatomic) BOOL hideBottomTips;
@property (nonatomic) BOOL forceUseHideBottomTips;
@property (nonatomic) BOOL onceClose;
@property (nonatomic) NSString excludeGroupType;
@property (nonatomic) NSDictionary imExtra;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) UIImage image;
@property (nonatomic) NSString filePath;
@property (nonatomic) UIImage coverImage;
@property (nonatomic) BOOL topVCCloseOnCallback;
@property (nonatomic) NSString pkSharePanelTitleText;
@property (nonatomic) NSString pkSharePanelPlaceholderText;
@property (nonatomic) NSURL pkSharePanelResourceUrl;
@property (nonatomic) NSURL pkShareImResourceUrl;
@property (nonatomic) NSURL pkShareAnchorRoomCoveryUrl;
@property (nonatomic) NSURL pkShareOpositeRoomCoveryUrl;
@property (nonatomic) NSNumber pkSharePKId;
@property (nonatomic) NSNumber pkShareChannelId;
@property (nonatomic) NSNumber pkShareOpositeRoomId;
@property (nonatomic) NSDictionary toUserParams;
@property (nonatomic) NSString sharePanelStrategyScene;
@property (nonatomic) NSDictionary springTaskParams;
@property (nonatomic) BOOL shouldHideGroupSharing;
@property (nonatomic) NSString im_shareWay;
@property (nonatomic) BOOL enableUseNewSecondSharePanel;
@property (nonatomic) BOOL shareVideoOnly;
@property (nonatomic) NSString im_enterMethod;
@property (nonatomic) BOOL isFromLiveLongPressPanel;
@property (nonatomic) NSString createGroupEnterMethodForTrack;
@property (nonatomic) NSString createGroupEnterFromForTrack;
@property (nonatomic) NSString selectedUserIds;
@property (nonatomic) NSString selectAtLeastOne;
@property (nonatomic) NSDictionary activityDict;
@property (nonatomic) BOOL needFetchData;
@property (nonatomic) @? fetchDataBlock;
@property (nonatomic) NSArray shareList;
@property (nonatomic) NSDictionary currentShareListDic;
@property (nonatomic) BOOL enableMessageTabSort;
@property (nonatomic) AWEShareIMPanelGeneralConfigContext sharePanelGeneralConfigContext;
@property (nonatomic) AWEShareIMPerformanceTrackModel sharePanelPerformanceTrackModel;
@property (nonatomic) AWEShareIMFetchContactResultModel fetchContactResult;
@property (nonatomic) @? showCustomTipsAfterSendMessage;
@property (nonatomic) BOOL disableCreateGroupSuccessToast;
@property (nonatomic) BOOL didPastedBeforeSendForTrack;
@property (nonatomic) double inputMethodUseTime;
@property (nonatomic) double keyboardShowDurationBeforeSend;
@property (nonatomic) double typingSpeedBeforeSend;
@property (nonatomic) q panelType;
@property (nonatomic) BOOL hideSnackBar;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)setCoverImage:;
- (long long)panelType;
- (void)setInputMethodUseTime:;
- (double)keyboardShowDurationBeforeSend;
- (void)setKeyboardShowDurationBeforeSend:;
- (void)setSharePanelStrategyScene:;
- (id)sharePanelStrategyScene;
- (id)sharePanelGeneralConfigContext;
- (void)setShouldHideGroupSharing:;
- (void)setSharePanelGeneralConfigContext:;
- (void)setEnableMessageTabSort:;
- (void)setTypingSpeedBeforeSend:;
- (double)inputMethodUseTime;
- (void)setDidPastedBeforeSendForTrack:;
- (void)setIm_enterMethod:;
- (void)setCurrentShareListDic:;
- (void)setPanelType:;
- (id)imExtra;
- (void)setImExtra:;
- (BOOL)needFetchData;
- (void)setNeedFetchData:;
- (void)setFetchDataBlock:;
- (id)im_enterMethod;
- (id)toUserParams;
- (BOOL)disableIMSendVideoSuccessTracker;
- (void)setDisableIMSendVideoSuccessTracker:;
- (id)sharePanelPerformanceTrackModel;
- (void)setSharePanelPerformanceTrackModel:;
- (id)showCustomTipsAfterSendMessage;
- (void)setShowCustomTipsAfterSendMessage:;
- (BOOL)disableCreateGroupSuccessToast;
- (void)setDisableCreateGroupSuccessToast:;
- (void)setCustomToast:;
- (void)setEnableUseNewSecondSharePanel:;
- (id)trackRecentlyChatShowSet;
- (id)trackChatShowSet;
- (void)setTrackChatShowSet:;
- (void)setTrackRecentlyChatShowSet:;
- (id)createGroupEnterFromForTrack;
- (void)setCreateGroupEnterFromForTrack:;
- (id)createGroupEnterMethodForTrack;
- (void)setCreateGroupEnterMethodForTrack:;
- (void)setHideToast:;
- (void)setIm_shareWay:;
- (id)fetchDataBlock;
- (void)setHideBottomTips:;
- (void)setForceUseHideBottomTips:;
- (void)setTopVCCloseOnCallback:;
- (BOOL)hideBottomTips;
- (BOOL)shareVideoOnly;
- (void)setShareVideoOnly:;
- (id)pkShareAnchorRoomCoveryUrl;
- (id)pkShareOpositeRoomCoveryUrl;
- (id)pkSharePanelResourceUrl;
- (id)pkSharePKId;
- (id)pkShareChannelId;
- (id)pkShareOpositeRoomId;
- (id)pkShareImResourceUrl;
- (void)setHideSnackBar:;
- (void)setToUserParams:;
- (BOOL)didPastedBeforeSendForTrack;
- (double)typingSpeedBeforeSend;
- (BOOL)hideToast;
- (id)customToast;
- (BOOL)hideSnackBar;
- (BOOL)forceUseHideBottomTips;
- (BOOL)isFromLiveLongPressPanel;
- (BOOL)enableMessageTabSort;
- (BOOL)shouldHideGroupSharing;
- (BOOL)topVCCloseOnCallback;
- (id)quickInputConfig;
- (BOOL)separateMsg;
- (void)setSeparateMsg:;
- (BOOL)enableUseNewSecondSharePanel;
- (id)excludeGroupType;
- (id)pkSharePanelPlaceholderText;
- (BOOL)hidesIMContacts;
- (id)fetchContactResult;
- (BOOL)onceClose;
- (void)setOnceClose:;
- (id)im_shareWay;
- (id)currentShareListDic;
- (id)selectedUserIds;
- (id)selectAtLeastOne;
- (id)pkSharePanelTitleText;
- (void)setQuickInputConfig:;
- (void)setExcludeGroupType:;
- (void)setHidesIMContacts:;
- (void)setShowingInverseShareUserIcon:;
- (void)setIsFromLiveLongPressPanel:;
- (void)setSelectedUserIds:;
- (void)setSelectAtLeastOne:;
- (void)setActivityDict:;
- (void)setPkSharePanelTitleText:;
- (void)setPkSharePanelPlaceholderText:;
- (void)setPkSharePanelResourceUrl:;
- (void)setPkShareImResourceUrl:;
- (void)setPkShareAnchorRoomCoveryUrl:;
- (void)setPkShareOpositeRoomCoveryUrl:;
- (void)setPkSharePKId:;
- (void)setPkShareChannelId:;
- (void)setPkShareOpositeRoomId:;
- (id)activityDict;
- (void)setFetchContactResult:;
- (BOOL)shouldIgnoreDuoshanStrategy;
- (void)setShouldIgnoreDuoshanStrategy:;
- (BOOL)showingInverseShareUserIcon;
- (id)springTaskParams;
- (void)setSpringTaskParams:;
- (id)filePath;
- (id)image;
- (void)setImage:;
- (void)setFilePath:;
- (void).cxx_destruct;
- (id)coverImage;
- (void)setShareList:;
- (id)shareList;
@end
