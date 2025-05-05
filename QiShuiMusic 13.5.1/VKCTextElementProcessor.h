@interface VKCTextElementProcessor : NSObject
+ (id)textElementsFromCRDocumentOutputRegion:;
+ (id)dataDetectorsFromCRDocumentOutputRegion:shouldFilter:;
+ (id)dataDetectorElementFromVNBarcodeObservation:loggingIndex:;
@end
