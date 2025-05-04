@interface AWEPluginClientAICustomImpl : NSObject
@property (nonatomic) VEScan scanSession;
@property (nonatomic) UIImage scanInputImage;
@property (nonatomic) BOOL needResetQRCodeService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)scan:onScanCompleteWithQRCodeResult:;
- (id)scanSession;
- (void)setScanSession:;
- (void)setNeedResetQRCodeService:;
- (void)p_realReleaseQRCodeService;
- (void)bdp_runQRCodeRecognizerWithInputImage:pagePath:completion:;
- (void)setScanInputImage:;
- (id)scanInputImage;
- (BOOL)needResetQRCodeService;
- (void)bdp_registerQRCodeServiceWithCallback:;
- (void)bdp_releaseQRCodeService;
- (void)bdp_runQRCodeRecognizerWithInputImage:completion:;
- (void).cxx_destruct;
+ (id)sharedPlugin;
@end
