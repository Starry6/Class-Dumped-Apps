@interface OBPrivacyLinkController_iOS : OBPrivacyLinkController
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UITextView textView;
- (id)textView;
- (id)initWithBundleIdentifiers:;
- (id)iconView;
- (BOOL)_canShowWhileLocked;
- (void)processBundlesForTitleInformation;
- (id)initWithPrivacyBundle:;
- (void)setLinkEnabled:;
- (void).cxx_destruct;
- (void)setCustomTintColor:;
- (void)loadView;
- (void)setUnderlineLinks:;
@end
