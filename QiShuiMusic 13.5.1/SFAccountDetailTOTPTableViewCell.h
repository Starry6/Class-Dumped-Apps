@interface SFAccountDetailTOTPTableViewCell : UITableViewCell
- (id)initWithStyle:reuseIdentifier:;
- (void)dealloc;
- (void).cxx_destruct;
- (void)configureWithGenerator:;
- (void)_updateCodeAndLabels;
- (id)_formattedCode;
- (void)_startTOTPTimer;
- (id)_attributedSubtitleString;
- (id)_attributedSubtitleStringWithRemainingSeconds:;
@end
