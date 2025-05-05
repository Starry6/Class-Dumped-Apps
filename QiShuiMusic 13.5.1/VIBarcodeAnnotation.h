@interface VIBarcodeAnnotation : NSObject
@property (nonatomic) NSArray annotationItems;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithAnnotationItems:;
- (id)annotationItems;
+ (id)annotationFromObservations:;
@end
