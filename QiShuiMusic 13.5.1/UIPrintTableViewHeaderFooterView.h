@interface UIPrintTableViewHeaderFooterView : UITableViewHeaderFooterView
@property (nonatomic) UILabel label;
@property (nonatomic) UIActivityIndicatorView spinner;
@property (nonatomic) NSString messageText;
@property (nonatomic) BOOL spinSpinner;
@property (nonatomic) BOOL spinnerHidden;
- (id)initWithReuseIdentifier:;
- (id)spinner;
- (void)setLabel:;
- (void)prepareForReuse;
- (id)label;
- (void).cxx_destruct;
- (id)messageText;
- (void)setMessageText:;
- (void)setSpinner:;
- (BOOL)spinSpinner;
- (void)setSpinSpinner:;
- (BOOL)spinnerHidden;
- (void)setSpinnerHidden:;
@end
