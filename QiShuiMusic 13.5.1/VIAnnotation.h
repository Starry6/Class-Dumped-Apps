@interface VIAnnotation : NSObject
@property (nonatomic) NSArray nsfwAnnotations;
@property (nonatomic) NSArray faceAnnotations;
@property (nonatomic) NSArray humanAnnotations;
@property (nonatomic) VITextBlockAnnotation textBlockAnnotation;
@property (nonatomic) VIScenenetAnnotation scenenetAnnotation;
@property (nonatomic) VIBarcodeAnnotation barcodeAnnotation;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithFaceAnnotations:humanAnnotations:nsfwAnnotations:textBlockAnnotation:scenenetAnnotation:barcodeAnnotation:;
- (id)initWithTextAnnotations:;
- (id)initWithAnnotations:humanAnnotations:nsfwAnnotations:textBlockAnnotation:;
- (id)nsfwAnnotations;
- (id)faceAnnotations;
- (id)humanAnnotations;
- (id)textBlockAnnotation;
- (id)scenenetAnnotation;
- (id)barcodeAnnotation;
@end
