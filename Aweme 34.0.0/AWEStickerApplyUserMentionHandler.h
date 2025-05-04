@interface AWEStickerApplyUserMentionHandler : AWEStickerApplyBaseHandler
@property (nonatomic) NSArray businessTitleExtraInfoArray;
@property (nonatomic) NSString publishTitle;
@property (nonatomic) NSMutableArray stickerAutoAddStickerArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPublishTitle:;
- (id)publishTitle;
- (void)cameraService:pauseRecordWithError:;
- (void)flowServiceWillEnterNextPageWithMode:;
- (void)finishSwitchToDuetMode;
- (void)finishSwitchToNormalMode;
- (void)handlerDidBecomeActive;
- (void)camera:didRecvMessage:;
- (void)saveBusinessTitleExtraInfo;
- (void)setStickerAutoAddStickerArray:;
- (void)setBusinessTitleExtraInfoArray:;
- (id)businessTitleExtraInfoArray;
- (id)stickerAutoAddStickerArray;
- (void)resetBusinessTitleExtraInfo;
- (void)resetStickerAutoMentionSticker;
- (void)setContainer:;
- (void).cxx_destruct;
+ (void)addPropUserMentionSticker:;
+ (void)addPropUserMentionSticker:stickerAddArray:;
+ (BOOL)canAddExtraInfoWithRepository:propMentionModel:;
@end
