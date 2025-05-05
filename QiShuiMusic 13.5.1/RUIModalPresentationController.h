@interface RUIModalPresentationController : _UIFormSheetPresentationController
@property (nonatomic) Q ruiModalPresentationStyle;
- (void)presentationTransitionWillBegin;
- (void)preferredContentSizeDidChangeForChildContentContainer:;
- (unsigned long long)modalPresentationStyle;
- (void)setRUIModalPresentationStyle:;
- (double)_sheetHeightWithSize:;
- (void).cxx_destruct;
- (id)initWithPresentedViewController:presentingViewController:modalPresentationStyle:;
- (unsigned long long)ruiModalPresentationStyle;
- (id)initWithPresentedViewController:presentingViewController:modalPresentationStyle:style:;
@end
