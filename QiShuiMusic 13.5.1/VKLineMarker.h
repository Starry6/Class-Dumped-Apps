@interface VKLineMarker : VKMarker
@property (nonatomic) NSString localizedName;
- (id)localizedName;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)featureHandles;
- (id)initWithLabelFeatureMarkerPtr:;
- (id)labelFeatureMarkerImpl;
+ (id)markerWithLabelFeatureMarker:;
@end
