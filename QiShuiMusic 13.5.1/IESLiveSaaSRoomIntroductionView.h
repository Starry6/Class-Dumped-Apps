@interface IESLiveSaaSRoomIntroductionView : UIView
@property (nonatomic) IESLiveSaaSRoomIntroductionViewModel viewModel;
@property (nonatomic) UIView contentView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView settingBackgroundView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UICollectionView labelCollectionView;
@property (nonatomic) UITextView introductionTextView;
@property (nonatomic) IESLiveSaaSButton saveButton;
@property (nonatomic) UIView switchBackgroundView;
@property (nonatomic) UILabel switchTitleLabel;
@property (nonatomic) UISwitch roomIntroductionSwitch;
@property (nonatomic) UIView roomIntroductionGuideView;
@property (nonatomic) UILabel guideLabel;
@property (nonatomic) UIImageView guideImageView;
@property (nonatomic) IESLiveSaaSPickerView pickerView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)attachIconWith:;
- (void)setupPickerView;
- (void)deleteAction:;
- (void)guideImageRequest:;
- (id)guideImageView;
- (id)guideLabel;
- (void)handleKeyboardHide:;
- (void)handleKeyboardShow:;
- (void)handleSwitchClick:;
- (void)hudMaxTextLength;
- (id)introductionTextView;
- (id)labelCollectionView;
- (void)onPickerViewConfirm:;
- (BOOL)resignFirstResponderIfLegal:;
- (id)roomIntroductionGuideView;
- (id)roomIntroductionSwitch;
- (void)saveButtonClick:;
- (void)setGuideImageView:;
- (void)setGuideLabel:;
- (void)setIntroductionTextView:;
- (void)setLabelCollectionView:;
- (void)setRoomIntroductionGuideView:;
- (void)setRoomIntroductionSwitch:;
- (void)setSettingBackgroundView:;
- (void)setSwitchTitleLabel:;
- (id)settingBackgroundView;
- (void)setupBaseView;
- (void)setupGuideView;
- (void)setupSettingView;
- (void)switchTaggled:;
- (id)switchTitleLabel;
- (void)textViewSetAttributedString:;
- (void)trackSwitchStatus;
- (void)uploadShouldToastSuccess:;
- (id)contentView;
- (void)dealloc;
- (id)viewModel;
- (void)setTitleLabel:;
- (void)layoutSubviews;
- (id)initWithViewModel:;
- (id)hitTest:withEvent:;
- (void)collectionView:didSelectItemAtIndexPath:;
- (void).cxx_destruct;
- (void)addObserver;
- (void)setContentView:;
- (id)iconImageView;
- (void)setViewModel:;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)textViewDidChange:;
- (BOOL)textView:shouldChangeTextInRange:replacementText:;
- (id)saveButton;
- (void)setSaveButton:;
- (id)pickerView;
- (void)setPickerView:;
- (id)switchBackgroundView;
- (void)setSwitchBackgroundView:;
- (void)updateWith:;
+ (id)presentPopupView:hostVC:;
+ (void)presentWithViewModel:hostVC:;
@end
