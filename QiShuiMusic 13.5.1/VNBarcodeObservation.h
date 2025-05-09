@interface VNBarcodeObservation : VNRectangleObservation
@property (nonatomic) NSDictionary acbsBarcodeInfo;
@property (nonatomic) r^{__MRCDescriptor=} mrcDescriptor;
@property (nonatomic) NSData payloadDataValue;
@property (nonatomic) NSNumber appClipCodeMetadataValue;
@property (nonatomic) NSString symbology;
@property (nonatomic) CIBarcodeDescriptor barcodeDescriptor;
@property (nonatomic) NSString payloadStringValue;
- (void)dealloc;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)barcodeDescriptor;
- (id)vn_cloneObject;
- (id)getDataDetectorResults:;
- (id)initWithOriginatingRequestSpecifier:symbology:descriptor:topLeft:bottomLeft:bottomRight:topRight:;
- (id)initWithOriginatingRequestSpecifier:symbology:descriptor:boundingBox:;
- (void)setMrcDescriptor:;
- (id)payloadStringValue;
- (id)payloadDataValue;
- (id)appClipCodeMetadataValue;
- (id)symbology;
- (id)acbsBarcodeInfo;
- (void)setACBSBarcodeInfo:;
- (id)mrcDescriptor;
- (void)setMRCDescriptor:;
+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:;
@end
