@interface SAGKMapPod : SAGKPodView
@property (nonatomic) SALocation location;
@property (nonatomic) SAUIAppPunchOut punchOut;
@property (nonatomic) NSNumber showButton;
@property (nonatomic) NSNumber zoomLevel;
- (id)zoomLevel;
- (void)setZoomLevel:;
- (id)groupIdentifier;
- (id)location;
- (id)encodedClassName;
- (void)setLocation:;
- (void)setPunchOut:;
- (id)punchOut;
- (id)showButton;
- (void)setShowButton:;
+ (id)mapPod;
+ (id)mapPodWithDictionary:context:;
@end
