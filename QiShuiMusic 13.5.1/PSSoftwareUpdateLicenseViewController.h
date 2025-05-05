@interface PSSoftwareUpdateLicenseViewController : PSViewController
@property (nonatomic) NSString licenseTextInfo;
@property (nonatomic) UITextView licenseTextView;
- (void)didReceiveMemoryWarning;
- (BOOL)_canShowWhileLocked;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithLicense:;
- (void)setLicenseText:;
- (id)licenseTextInfo;
- (void)setLicenseTextInfo:;
- (id)licenseTextView;
- (void)setLicenseTextView:;
@end
