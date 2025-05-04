@interface AWEIMNewHalfScreenMuteSettingsCollectionViewCell : AWEIMHalfScreenSettingsCollectionViewCell
@property (nonatomic) AWEIMHalfScreenMuteSettingsCellViewModel viewModel;
@property (nonatomic) UITapGestureRecognizer tap;
@property (nonatomic) UIView accessView;
@property (nonatomic) <AWEIMNewHalfScreenMuteSettingsCollectionViewCellDelegate> switchDelegate;
- (void)configWithViewModel:;
- (void)didTapped;
- (void)setAccessView:;
- (id)accessView;
- (id)switchDelegate;
- (void)didTapSwitch;
- (void)setSwitchDelegate:;
- (id)viewModel;
- (id)initWithFrame:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)tap;
- (void)setTap:;
@end
