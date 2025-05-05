@interface MKCalloutView : UIView
@property (nonatomic) MKAnnotationView annotationView;
@property (nonatomic) q anchorPosition;
@property (nonatomic) BOOL visible;
@property (nonatomic) BOOL hasPendingVisibility;
@property (nonatomic) BOOL parallaxEnabled;
- (BOOL)parallaxEnabled;
- (void)setParallaxEnabled:;
- (id)initWithCoder:;
- (long long)anchorPosition;
- (id)initWithFrame:;
- (id)annotationView;
- (void).cxx_destruct;
- (BOOL)isVisible;
- (id)initWithAnnotationView:;
- (void)annotationViewFrameDidChange;
- (void)motionEffectDidUpdate:;
- (BOOL)hasPendingVisibility;
- (void)showAnimated:completionBlock:;
- (void)dismissAnimated:completionBlock:;
@end
