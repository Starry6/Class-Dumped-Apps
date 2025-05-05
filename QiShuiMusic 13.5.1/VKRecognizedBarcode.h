@interface VKRecognizedBarcode : VKRecognizedItem
@property (nonatomic) VNBarcodeObservation observation;
@property (nonatomic) NSString symbology;
@property (nonatomic) CIBarcodeDescriptor barcodeDescriptor;
@property (nonatomic) NSString payloadStringValue;
- (id)description;
- (id)observation;
- (id)barcodeDescriptor;
- (id)payloadStringValue;
- (id)symbology;
- (id)initWithFrameInfo:barcodeObservation:;
@end
