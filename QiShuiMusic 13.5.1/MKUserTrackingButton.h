@interface MKUserTrackingButton : UIView
@property (nonatomic) MKMapView mapView;
- (void)_intrinsicContentSizeInvalidatedForChildView:;
- (id)init;
- (void)addInteraction:;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (id)mapView;
- (id)systemLayoutSizeFittingSize:withHorizontalFittingPriority:verticalFittingPriority:;
- (id)initWithFrame:;
- (void)setMapView:;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (void)removeInteraction:;
- (id)initWithFrame:button:;
+ (id)userTrackingButtonWithMapView:;
@end
