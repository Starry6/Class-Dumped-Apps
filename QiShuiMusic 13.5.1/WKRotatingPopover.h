@interface WKRotatingPopover : NSObject
@property (nonatomic) WKContentView view;
@property (nonatomic) {CGPoint=dd} presentationPoint;
@property (nonatomic) UIPopoverController popoverController;
@property (nonatomic) <WKRotatingPopoverDelegate> dismissionDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithView:;
- (void)didRotate:;
- (void)dealloc;
- (id)view;
- (id)popoverController;
- (void).cxx_destruct;
- (void)willRotate:;
- (void)setPopoverController:;
- (void)dismissPopoverAnimated:;
- (id).cxx_construct;
- (void)popoverControllerDidDismissPopover:;
- (unsigned long long)popoverArrowDirections;
- (void)presentPopoverAnimated:;
- (id)presentationPoint;
- (void)setPresentationPoint:;
- (id)dismissionDelegate;
- (void)setDismissionDelegate:;
@end
