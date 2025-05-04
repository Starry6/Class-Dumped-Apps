@interface AWETeenPlayInteractionPrivateMoreButton : AWETeenPlayInteractionBaseElement
@property (nonatomic) UIButton moreButton;
@property (nonatomic) DUXLoadingToast saveLoadingView;
@property (nonatomic) AWEMediaDownloadInfo downloadInfo;
- (void)initializeElement;
- (id)destinationURLForURI:;
- (void)saveToAlbum;
- (void)clickMoreButton;
- (void)showMorerActionSheetView;
- (void)saveToAlbumAction;
- (void)deletePrivateWorkAction;
- (id)saveLoadingView;
- (void)devTrackerSaveEvent:;
- (void)showToast:withIconName:;
- (id)titleAction:;
- (void)deletePrivateWork;
- (void)devTrackerDeleteEvent:;
- (void)setSaveLoadingView:;
- (void)longPressAction;
- (void)viewDidLoad;
- (id)moreButton;
- (void)setData:;
- (void).cxx_destruct;
- (void)setMoreButton:;
- (void)updateProgress:;
- (id)downloadInfo;
- (void)setDownloadInfo:;
@end
