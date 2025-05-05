@interface PDFAnnotationPointerTrackingView : UIView
@property (nonatomic) PDFAnnotation annotation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)annotation;
- (void)pointerInteraction:willExitRegion:animator:;
- (void)pointerInteraction:willEnterRegion:animator:;
- (id)pointerInteraction:styleForRegion:;
- (void).cxx_destruct;
- (id)initWithFrame:annotation:;
@end
