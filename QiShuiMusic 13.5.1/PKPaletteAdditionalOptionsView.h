@interface PKPaletteAdditionalOptionsView : UIView
@property (nonatomic) UIStackView contentStackView;
@property (nonatomic) UIStackView textShapeStackView;
@property (nonatomic) UIStackView plusEllipsisStackView;
@property (nonatomic) PKPaletteButton plusButton;
@property (nonatomic) PKPaletteButton textButton;
@property (nonatomic) PKPaletteButton ellipsisButton;
@property (nonatomic) PKPaletteButtonGroupView keyboardButtonGroupView;
@property (nonatomic) PKPaletteKeyboardButton keyboardButton;
@property (nonatomic) PKPaletteButton returnKeyButton;
@property (nonatomic) PKPaletteMoreOptionsViewController moreOptionsViewController;
@property (nonatomic) UIViewController presentedPopoverViewController;
@property (nonatomic) NSLayoutConstraint plusButtonWidthConstraint;
@property (nonatomic) NSLayoutConstraint plusButtonHeightConstraint;
@property (nonatomic) NSLayoutConstraint ellipsisButtonWidthConstraint;
@property (nonatomic) NSLayoutConstraint ellipsisButtonHeightConstraint;
@property (nonatomic) NSLayoutConstraint textButtonWidthConstraint;
@property (nonatomic) NSLayoutConstraint textButtonHeightConstraint;
@property (nonatomic) NSLayoutConstraint shapeButtonWidthConstraint;
@property (nonatomic) NSLayoutConstraint shapeButtonHeightConstraint;
@property (nonatomic) <PKPalettePopoverPresenting> palettePopoverPresenting;
@property (nonatomic) <PKPaletteAdditionalOptionsViewDelegate> delegate;
@property (nonatomic) PKPaletteButton shapeButton;
@property (nonatomic) BOOL showsPlusButton;
@property (nonatomic) BOOL showsTextButton;
@property (nonatomic) BOOL showsShapeButton;
@property (nonatomic) BOOL autoHideOn;
@property (nonatomic) BOOL isFingerDrawsOn;
@property (nonatomic) BOOL shouldShowFingerDrawsOption;
@property (nonatomic) BOOL shouldShowTapToRadarOption;
@property (nonatomic) BOOL wantsEllipsisButtonVisible;
@property (nonatomic) BOOL wantsInputAssistantViewVisible;
@property (nonatomic) BOOL enableKeyboardButtons;
@property (nonatomic) q floatingKeyboardType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q edgeLocation;
@property (nonatomic) double scalingFactor;
- (id)plusButton;
- (void)setPlusButton:;
- (long long)adaptivePresentationStyleForPresentationController:traitCollection:;
- (void)dealloc;
- (id)intrinsicContentSize;
- (void)setDelegate:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (id)delegate;
- (void).cxx_destruct;
- (id)textButton;
- (long long)adaptivePresentationStyleForPresentationController:;
- (void)willMoveToSuperview:;
- (double)scalingFactor;
- (void)_updateUI;
- (id)contentStackView;
- (void)setContentStackView:;
- (void)setTextButton:;
- (void)setScalingFactor:;
- (id)ellipsisButton;
- (void)setEllipsisButton:;
- (unsigned long long)edgeLocation;
- (void)setEdgeLocation:;
- (void)dismissPalettePopoverWithCompletion:;
- (id)plusButtonFrame;
- (void)updatePopoverUI;
- (void)setPalettePopoverPresenting:;
- (id)palettePopoverPresenting;
- (void)moreOptionsViewControllerDidSelectTapToRadar:;
- (void)moreOptionsViewControllerDidSelectOpenPencilSettings:;
- (void)setShouldShowFingerDrawsOption:;
- (void)setIsFingerDrawsOn:;
- (void)setAutoHideOn:;
- (void)setShouldShowTapToRadarOption:;
- (BOOL)shouldShowFingerDrawsOption;
- (BOOL)isAutoHideOn;
- (BOOL)isFingerDrawsOn;
- (BOOL)shouldShowTapToRadarOption;
- (void)setEnableKeyboardButtons:;
- (BOOL)enableKeyboardButtons;
- (id)keyboardButton;
- (void)setKeyboardButton:;
- (id)returnKeyButton;
- (void)setReturnKeyButton:;
- (void)moreOptionsViewControllerDidToggleAutoHide:;
- (void)moreOptionsViewControllerDidToggleFingerDraws:;
- (void)moreOptionsViewControllerDidToggleHoverPreview:;
- (id)shapeButton;
- (void)setFloatingKeyboardType:;
- (long long)floatingKeyboardType;
- (void)_handleKeyboardButton;
- (void)_handleReturnKeyButton;
- (void)_didSelectEllipsisButton:;
- (void)setShowsPlusButton:;
- (void)setShowsTextButton:;
- (void)setShowsShapeButton:;
- (void)setWantsEllipsisButtonVisible:;
- (void)setWantsInputAssistantViewVisible:;
- (id)_keyboardButtonGroupViewButtons;
- (BOOL)showsPlusButton;
- (BOOL)showsTextButton;
- (BOOL)showsShapeButton;
- (BOOL)wantsEllipsisButtonVisible;
- (BOOL)wantsInputAssistantViewVisible;
- (id)textShapeStackView;
- (void)setTextShapeStackView:;
- (id)plusEllipsisStackView;
- (void)setPlusEllipsisStackView:;
- (id)keyboardButtonGroupView;
- (void)setKeyboardButtonGroupView:;
- (id)moreOptionsViewController;
- (void)setMoreOptionsViewController:;
- (id)presentedPopoverViewController;
- (void)setPresentedPopoverViewController:;
- (id)plusButtonWidthConstraint;
- (void)setPlusButtonWidthConstraint:;
- (id)plusButtonHeightConstraint;
- (void)setPlusButtonHeightConstraint:;
- (id)ellipsisButtonWidthConstraint;
- (void)setEllipsisButtonWidthConstraint:;
- (id)ellipsisButtonHeightConstraint;
- (void)setEllipsisButtonHeightConstraint:;
- (id)textButtonWidthConstraint;
- (void)setTextButtonWidthConstraint:;
- (id)textButtonHeightConstraint;
- (void)setTextButtonHeightConstraint:;
- (id)shapeButtonWidthConstraint;
- (void)setShapeButtonWidthConstraint:;
- (id)shapeButtonHeightConstraint;
- (void)setShapeButtonHeightConstraint:;
@end
