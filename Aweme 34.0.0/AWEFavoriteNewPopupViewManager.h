@interface AWEFavoriteNewPopupViewManager : NSObject
@property (nonatomic) DUXBasicSheet sheet;
@property (nonatomic) BOOL dontFavoriteNoticeViewShow;
@property (nonatomic) AWEFavoriteNewPopupViewController popupViewController;
@property (nonatomic) @? endFavoriteAddToFilePopupPromise;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sheetDidClickMaskArea:;
- (void)sheetDidDismiss:;
- (void)updateSheetHeight:animated:completion:;
- (void)setPopupViewController:;
- (id)popupViewController;
- (void)setDontFavoriteNoticeViewShow:;
- (BOOL)dontFavoriteNoticeViewShow;
- (void)updateMask:;
- (void)setEndFavoriteAddToFilePopupPromise:;
- (void)showFavoriteNewPopupView;
- (void)showFavoriteNewPopupViewWithContext:networkCompletionBlock:;
- (id)endFavoriteAddToFilePopupPromise;
- (void)dismissFavoriteNewPopupViewWithAnimation:completion:;
- (void)showFavoriteNewPopupViewWithViewController:dataController:;
- (void).cxx_destruct;
- (id)sheet;
- (void)setSheet:;
+ (id)shareInstance;
@end
