@interface AWEProfileNaviCoverTipItemController : NSObject
@property (nonatomic) AWEUserHomeCoverTipButton tipButton;
@property (nonatomic) AWEProfileCoverPreviewActionSheetManager actionSheetManager;
@property (nonatomic) <AWEProfileNavigationContainerDelegate> delegate;
@property (nonatomic) q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShow;
- (id)tipButton;
- (void)setTipButton:;
- (id)profileContext;
- (void)tipButtonTapped:;
- (id)actionSheetManager;
- (void)setActionSheetManager:;
- (id)navigationItemView;
- (void)selectCoverFromAlbum:;
- (id)delegate;
- (long long)type;
- (void)setType:;
- (void)viewWillAppear;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)itemSize;
- (void)viewWillDisappear;
@end
