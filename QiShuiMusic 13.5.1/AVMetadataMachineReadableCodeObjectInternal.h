@interface AVMetadataMachineReadableCodeObjectInternal : NSObject
@property (nonatomic) NSArray corners;
@property (nonatomic) NSString stringValue;
@property (nonatomic) NSDictionary basicDescriptor;
@property (nonatomic) BOOL decoded;
@property (nonatomic) CIBarcodeDescriptor descriptor;
- (id)descriptor;
- (void)dealloc;
- (void)setDescriptor:;
- (void)setStringValue:;
- (id)stringValue;
- (id)corners;
- (void)setCorners:;
- (id)basicDescriptor;
- (void)setBasicDescriptor:;
- (BOOL)decoded;
- (void)setDecoded:;
@end
