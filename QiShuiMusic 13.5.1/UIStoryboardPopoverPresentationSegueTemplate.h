@interface UIStoryboardPopoverPresentationSegueTemplate : UIStoryboardSegueTemplate
@property (nonatomic) Q permittedArrowDirections;
@property (nonatomic) NSArray passthroughViews;
@property (nonatomic) UIView anchorView;
@property (nonatomic) UIBarButtonItem anchorBarButtonItem;
- (unsigned long long)permittedArrowDirections;
- (void)setPermittedArrowDirections:;
- (id)passthroughViews;
- (void)setPassthroughViews:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)anchorView;
- (void)setAnchorView:;
- (id)newDefaultPrepareHandlerForSegue:;
- (id)newDefaultPerformHandlerForSegue:;
- (id)anchorBarButtonItem;
- (void)setAnchorBarButtonItem:;
@end
