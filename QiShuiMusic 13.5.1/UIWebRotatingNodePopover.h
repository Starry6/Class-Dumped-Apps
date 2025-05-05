@interface UIWebRotatingNodePopover : NSObject
@property (nonatomic) DOMNode node;
@property (nonatomic) {CGPoint=dd} presentationPoint;
@property (nonatomic) UIPopoverController popoverController;
@property (nonatomic) <UIWebRotatingNodePopoverDelegate> dismissDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)node;
- (void)didRotate:;
- (void)dealloc;
- (id)popoverController;
- (void).cxx_destruct;
- (void)willRotate:;
- (void)setPopoverController:;
- (void)dismissPopoverAnimated:;
- (void)popoverControllerDidDismissPopover:;
- (id)initWithDOMNode:;
- (unsigned long long)popoverArrowDirections;
- (void)presentPopoverAnimated:;
- (void)setNode:;
- (id)presentationPoint;
- (void)setPresentationPoint:;
- (id)dismissDelegate;
- (void)setDismissDelegate:;
@end
