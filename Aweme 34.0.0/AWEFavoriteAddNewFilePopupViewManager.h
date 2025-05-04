@interface AWEFavoriteAddNewFilePopupViewManager : NSObject
@property (nonatomic) DUXBasicSheet sheet;
@property (nonatomic) BOOL dontFavoriteNoticeViewShow;
@property (nonatomic) AWEFavoriteAddNewFilePopupViewController addNewFilePopupViewController;
@property (nonatomic) @? endFavoriteAddNewFilePopupPromise;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sheetDidClickMaskArea:;
- (void)sheetDidDismiss:;
- (void)updateSheetHeight:animated:completion:;
- (id)endFavoriteAddNewFilePopupPromise;
- (void)dismissAddNewFilePopupViewWithAnimation:completion:;
- (void)setEndFavoriteAddNewFilePopupPromise:;
- (void)showAddNewFilePopupViewWithCompletion:;
- (id)addNewFilePopupViewController;
- (void)setDontFavoriteNoticeViewShow:;
- (BOOL)dontFavoriteNoticeViewShow;
- (void)showAddNewFilePopupView;
- (void)updateMask:;
- (void)setAddNewFilePopupViewController:;
- (void).cxx_destruct;
- (id)sheet;
- (void)setSheet:;
+ (id)shareInstance;
@end
