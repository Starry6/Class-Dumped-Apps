@interface VKMarker : NSObject
@property (nonatomic) r^v actualMarker;
@property (nonatomic) NSString name;
@property (nonatomic) NSString shortName;
@property (nonatomic) Q featureID;
@property (nonatomic) Q venueID;
@property (nonatomic) GEOFeatureStyleAttributes styleAttributes;
@property (nonatomic) NSInteger markerType;
- (id)shortName;
- (void)dealloc;
- (unsigned long long)venueID;
- (unsigned long long)featureID;
- (void).cxx_destruct;
- (id)name;
- (id).cxx_construct;
- (id)styleAttributes;
- (id)featureHandles;
- (id)initWithFeatureMarkerPtr:markerType:;
- (id)actualMarker;
- (int)markerType;
+ (id)markerWithFeatureMarker:;
@end
