@interface IESLiveSaaSStickerStore : NSObject
@property (nonatomic) IESLiveSaaSStickerApi stickerApi;
@property (nonatomic) BOOL isUserSelectTimeSticker;
@property (nonatomic) NSString previousContent;
@property (nonatomic) <IESLiveMonitor> monitor;
@property (nonatomic) <IESLiveSaaSAnchorTimeSchedulePreference> timeNoticePref;
@property (nonatomic) <IESLiveSaaSTimeScheduleService> timeScheduleService;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) IESLiveSaaSStickerModel stickerModel;
@property (nonatomic) IESLiveSaaSStickerItemModel imageStickerModel;
@property (nonatomic) IESLiveSaaSStickerItemModel textStickerModel;
@property (nonatomic) NSString toastString;
@property (nonatomic) BOOL enableEditSticker;
@property (nonatomic) q textStickerModifyCount;
@property (nonatomic) IESLiveSaaSLiveRoomModel roomModel;
@property (nonatomic) BOOL needHideKeyboard;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)imageStickerKey;
- (void)useTextSticker:;
- (void)useTimeSticker:;
- (id)previousContent;
- (void)setToastString:;
- (void)checkShowingStickersWithStickerModel:;
- (void)deleteSticker:;
- (void)didSetAttachingDIContext;
- (void)didUpdateRoom:;
- (BOOL)enableEditSticker;
- (void)handleDecorationMessage:;
- (void)handleNoticeMessage:;
- (void)handleStickerWraper:;
- (void)hideCurrentSticer;
- (id)imageStickerModel;
- (id)initWithRoomModel:;
- (BOOL)isUserSelectTimeSticker;
- (BOOL)needHideKeyboard;
- (void)onStickersChanges:;
- (BOOL)pickTimeStickerFromListIfNeeds;
- (void)removeCurrentSticker;
- (void)removeImageSticker;
- (void)removeTextSticker;
- (void)requestStickerList;
- (id)roomModel;
- (void)selectNewSticker:;
- (void)setEnableEditSticker:;
- (void)setImageStickerModel:;
- (void)setIsUserSelectTimeSticker:;
- (void)setNeedHideKeyboard:;
- (void)setPreviousContent:;
- (void)setRoomModel:;
- (void)setStickerApi:;
- (void)setStickerModel:;
- (void)setTextStickerModel:;
- (void)setTextStickerModifyCount:;
- (void)setTimeNoticePref:;
- (void)setTimeScheduleService:;
- (void)setTrackContext:;
- (void)showDeleteToastIfNeeded;
- (id)stickerApi;
- (id)stickerModel;
- (id)textStickerKey;
- (id)textStickerModel;
- (long long)textStickerModifyCount;
- (id)timeNoticePref;
- (id)timeScheduleService;
- (void)timeStickerShouldAdd;
- (void)timeStickerShouldRemove;
- (id)toastString;
- (id)trackContext;
- (void)updateSticker:;
- (void)updateTextStickerContent:;
- (void)uploadStickers;
- (void)useImageSticker:;
- (void)setMonitor:;
- (void)setup;
- (void).cxx_destruct;
- (id)monitor;
- (void)messageReceived:;
@end
