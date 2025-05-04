@interface AWENovelWelfareDiversionPopupService : HTSService
@property (nonatomic) NSMutableDictionary imageCache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onServiceInit;
- (void)preLoadImageWithUrl:completion:;
- (void)preloadSKOverlayWithAppID:position:;
- (id)configCommentNovelDiversionViewWith:trackParams:;
- (BOOL)canShowCommentGuideNovelEntryWithModel:;
- (void)commentGuideNovelEntryDidShowWith:trackParams:;
- (id)commentTrackParamsWithModel:;
- (void)showDiversionPopupWithModel:delegate:trackParams:;
- (void)handleCommentNovelBarClickActionWithModel:;
- (void)openAppWithSchema:cert:;
- (void)setImageCache:;
- (id)imageCache;
- (void).cxx_destruct;
+ (void)_aweLazyRegisterStaticLoad;
+ (id)novelFMSKOverlayConfig;
+ (id)getCertWithType:;
+ (BOOL)isInstallWithType:;
@end
