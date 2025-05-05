@interface SFWebProcessPlugInCertificateWarningController : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)visitInsecureWebsite;
- (void)showCertificateInformation;
- (id)_certificateWarningPageHandlerProxy;
- (void)certificateWarningPageLoaded;
- (void)_clearCertificateWarningPagePresenterInterface;
- (id)initWithPageController:;
- (void)goBackSelected;
- (void)injectCertificateWarningBindingsForFrame:inScriptWorld:;
- (void).cxx_destruct;
- (void)prepareCertificateWarningPage:;
- (void)openClockSettings;
- (void)_setUpCertificateWarningPagePresenterInterface;
- (void)visitInsecureWebsiteWithTemporaryBypass;
@end
