@interface AWESuperManDownloadManager : NSObject
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSString appleID;
@property (nonatomic) @? dismissBlock;
@property (nonatomic) SKOverlay overlay;
@property (nonatomic) BOOL isPresenting;
@property (nonatomic) BOOL isDownload;
@property (nonatomic) BOOL isOpenStore;
@property (nonatomic) BOOL hasTouchedSKOverlay;
@property (nonatomic) Q showOverlayType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)initWithAwemeModel:;
- (void)setHasTouchedSKOverlay:;
- (void)setIsOpenStore:;
- (BOOL)hasTouchedSKOverlay;
- (BOOL)isOpenStore;
- (void)addSKOverlayActionNotifications;
- (void)removeSKOverlayActionNotifications;
- (void)tracker:;
- (void)tracker:withExtra:;
- (void)showOverlay:;
- (void)openAppStore:dismiss:;
- (void)appStoreDismissNotification:;
- (void)setShowOverlayType:;
- (void)skOverlayResetBoolValue;
- (void)skOverlayHandleOverlayEvent:;
- (void)skOverlayHandleActiveEvent:;
- (void)skOverlayWindowDidResignKey:;
- (unsigned long long)showOverlayType;
- (void)setIsDownload:;
- (BOOL)isPresenting;
- (void)dealloc;
- (id)overlay;
- (void)preload;
- (void).cxx_destruct;
- (void)setIsPresenting:;
- (id)appleID;
- (void)setAppleID:;
- (void)setOverlay:;
- (void)dismissOverlay;
- (void)storeOverlay:didFailToLoadWithError:;
- (void)storeOverlay:didFinishDismissal:;
- (void)storeOverlay:didFinishPresentation:;
- (BOOL)isDownload;
- (id)dismissBlock;
- (void)setDismissBlock:;
- (void)openAppStore:;
@end
