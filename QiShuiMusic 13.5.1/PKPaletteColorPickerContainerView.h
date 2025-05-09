@interface PKPaletteColorPickerContainerView : UIView
@property (nonatomic) UIStackView stackView;
@property (nonatomic) PKDrawingPaletteInputAssistantContainerView inputAssistantContainerView;
@property (nonatomic) PKPaletteInputAssistantViewController inputAssistantViewController;
@property (nonatomic) <PKPaletteColorPickerContainerViewDelegate> delegate;
@property (nonatomic) <PKDrawingPaletteViewStateSubject> paletteViewState;
@property (nonatomic) PKPaletteColorPickerView colorPickerView;
@property (nonatomic) <PKPalettePopoverPresenting> palettePopoverPresenting;
@property (nonatomic) BOOL shouldShowInputAssistantView;
@property (nonatomic) q layoutAxis;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)adaptivePresentationStyleForPresentationController:traitCollection:;
- (void)setStackView:;
- (void)setDelegate:;
- (long long)layoutAxis;
- (id)stackView;
- (id)initWithFrame:;
- (void)setLayoutAxis:;
- (void)traitCollectionDidChange:;
- (id)delegate;
- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:;
- (id)inputAssistantViewController;
- (void)_updateUI;
- (id)colorPickerView;
- (void)dismissPalettePopoverWithCompletion:;
- (id)paletteViewState;
- (void)setPaletteViewState:;
- (void)_handleUCBButtonPressed;
- (void)setShouldShowInputAssistantView:;
- (void)setPalettePopoverPresenting:;
- (void)_installInputAssistantViewContainer;
- (void)_showInputAssistantPopover;
- (BOOL)_isInputAssistantViewControllerPresented;
- (void)_dismissViewController:withCompletion:;
- (id)palettePopoverPresenting;
- (BOOL)shouldShowInputAssistantView;
- (id)inputAssistantContainerView;
- (void)setInputAssistantContainerView:;
- (void)setInputAssistantViewController:;
@end
