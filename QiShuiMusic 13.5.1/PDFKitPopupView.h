@interface PDFKitPopupView : UIView
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeFromSuperview;
- (void)popoverPresentationController:willRepositionPopoverToRect:inView:;
- (void)_presentViewController:;
- (BOOL)becomeFirstResponder;
- (void)popoverPresentationControllerDidDismissPopover:;
- (void)prepareForPopoverPresentation:;
- (void).cxx_destruct;
- (void)textViewDidChange:;
- (void)doneButton:;
- (id)initWithParentAnnotation:owningPageView:owningPDFView:;
- (void)_setupPopupView;
- (void)_presentPopupView;
- (void)_presentPopupView_iOS;
- (id)_popoverControllerSourceRect;
- (void)_removeControlForAnnotation;
- (void)_updateParentContents;
@end
