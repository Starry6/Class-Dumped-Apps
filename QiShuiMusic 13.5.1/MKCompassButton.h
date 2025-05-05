@interface MKCompassButton : UIView
@property (nonatomic) MKMapView mapView;
@property (nonatomic) q compassVisibility;
- (void)addInteraction:;
- (void)dealloc;
- (id)intrinsicContentSize;
- (id)mapView;
- (id)systemLayoutSizeFittingSize:withHorizontalFittingPriority:verticalFittingPriority:;
- (void)_updateVisibility;
- (void)setMapView:;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (void)removeInteraction:;
- (void)didTapCompassGesture:;
- (void)mapViewDidUpdateYawNotification:;
- (id)initWithFrame:mapView:;
- (void)setCompassVisibility:;
- (long long)compassVisibility;
+ (id)compassButtonWithMapView:;
@end
