@interface UIStoryboardPopoverSegue : UIStoryboardSegue
@property (nonatomic) NSArray _passthroughViews;
@property (nonatomic) Q _permittedArrowDirections;
@property (nonatomic) UIBarButtonItem _anchorBarButtonItem;
@property (nonatomic) UIView _anchorView;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} _anchorRect;
@property (nonatomic) UIPopoverController popoverController;
- (void)_setPassthroughViews:;
- (id)_passthroughViews;
- (id)popoverController;
- (void).cxx_destruct;
- (void)perform;
- (id)_anchorView;
- (unsigned long long)_permittedArrowDirections;
- (id)_anchorBarButtonItem;
- (void)_setPermittedArrowDirections:;
- (void)_setAnchorView:;
- (void)_setAnchorBarButtonItem:;
- (id)_anchorRect;
- (void)_setAnchorRect:;
@end
