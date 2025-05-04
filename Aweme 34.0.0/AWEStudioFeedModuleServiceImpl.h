@interface AWEStudioFeedModuleServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)requestAwemeItemWithID:completion:;
- (void)showPublishSuccessToastWithTask:;
- (void)showSaveDraftSuccessToastWithTask:;
- (void)showSaveToAlbumToastWithTask:;
- (void)showReplaceMusicSuccessPushViewWithTask:;
- (BOOL)isShowingStickerIcon;
- (void)preloadUserAvatar;
- (id)aweAwemeDetailTableViewControllerWithDataController:initialIndex:referString:enterFrom:logExtraDict:detailBottomInfoDict:shouldHideMusicInfoView:;
@end
