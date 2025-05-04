@interface AWEIMNewHalfScreenMuteSettingsChangeFilterCollectionViewCell : AWEIMHalfScreenSettingsChangeFilterCollectionViewCell
@property (nonatomic) <AWEIMHalfScreenMuteSettingsCellDelegate> delegate;
@property (nonatomic) UITapGestureRecognizer tap;
@property (nonatomic) AWEIMHalfScreenMuteFilterSettingsCellViewModel viewModel;
- (void)configWithViewModel:;
- (void)didClickCell;
- (void)configAccessibilityLabel;
- (id)delegate;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)tap;
- (void)setTap:;
@end
