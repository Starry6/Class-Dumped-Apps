@interface VIBarcodeAnnotationItem : NSObject
@property (nonatomic) NSString symbology;
@property (nonatomic) NSString payloadStringValue;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} normalizedBoundingBox;
@property (nonatomic) float confidence;
- (float)confidence;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)payloadStringValue;
- (id)symbology;
- (id)normalizedBoundingBox;
- (id)initWithSymbology:payloadStringValue:normalizedBoundingBox:confidence:;
+ (id)annotationItemFromObservation:;
@end
