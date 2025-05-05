@interface ASCredentialRequestBasicPaneViewController : ASCredentialRequestPaneViewController
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithTitle:subtitle:icon:;
- (void)_setUpIconView;
- (void)_setUpSubtitleLabel;
- (id)initWithTitle:titleStyle:subtitle:subtitleStyle:icon:iconStyle:;
- (void)updateSubtitle:;
- (void)_setUpTitleLabel;
- (BOOL)_useBoldTitleLayout;
- (double)_stackViewTopSpacing;
- (double)_boldTitle_stackViewTopSpacing;
- (double)_customSpacingAfterIcon;
- (double)_customSpacingAfterTitle;
- (double)_boldTitle_customSpacingAfterTitle;
- (double)_customSpacingAfterSubtitle;
@end
