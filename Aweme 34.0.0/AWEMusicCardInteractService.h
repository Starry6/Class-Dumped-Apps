@interface AWEMusicCardInteractService : NSObject
@property (nonatomic) NSDictionary lastDialogParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sheetDidDismiss:;
- (void)showListenMusicLaterBottomNotificationWith:extraParams:;
- (BOOL)canShowListenMusicLater;
- (void)markListenMusicLaterShow;
- (void)markListenMusicLaterClick;
- (id)p_calculateText:fallbackText:;
- (void)setLastDialogParams:;
- (id)nextRecordStartTsKey;
- (id)listenLaterShowRecordStartKey;
- (double)secondsInDay:;
- (id)listenLaterShowCountKey;
- (id)p_diversionParamsFromDialogParams:;
- (id)lastDialogParams;
- (void)addToListenMusicLaterWithMediaList:extraParams:completion:;
- (void)showDialogWithType:params:;
- (void).cxx_destruct;
+ (id)sharedService;
@end
