@interface MKMapSnapshotCustomFeatureAnnotation : NSObject
@property (nonatomic) _MKAnnotationViewCustomFeatureAnnotation internalCustomFeatureAnnotation;
@property (nonatomic) BOOL showsBalloonCallout;
@property (nonatomic) {?=dd} coordinate;
@property (nonatomic) double course;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)feature;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)coordinate;
- (void)setCoordinate:;
- (BOOL)showsBalloonCallout;
- (id)initWithCustomFeature:coordinate:;
- (id)internalCustomFeatureAnnotation;
- (void)setInternalCustomFeatureAnnotation:;
+ (BOOL)supportsSecureCoding;
+ (id)customFeatureAnnotationForMapItem:styleAttributes:;
+ (id)customFeatureAnnotationForMapItem:styleAttributes:suppressLabel:;
+ (id)customFeatureAnnotationForMapItem:;
@end
