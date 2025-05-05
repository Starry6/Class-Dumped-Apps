@interface CADisplayAttributes : NSObject
@property (nonatomic) q dolbyVision;
@property (nonatomic) q pqEOTF;
@property (nonatomic) q hdrStaticMetadataType1;
@property (nonatomic) q bt2020YCC;
@property (nonatomic) BOOL legacyHDMIEDID;
@property (nonatomic) I manufacturerID;
@property (nonatomic) I productID;
@property (nonatomic) I weekOfManufacture;
@property (nonatomic) I yearOfManufacture;
@property (nonatomic) I serialNumber;
- (unsigned int)serialNumber;
- (unsigned int)productID;
- (id).cxx_construct;
- (id)_initWithAttributes:;
- (long long)dolbyVision;
- (long long)pqEOTF;
- (long long)hdrStaticMetadataType1;
- (long long)bt2020YCC;
- (BOOL)legacyHDMIEDID;
- (unsigned int)manufacturerID;
- (unsigned int)weekOfManufacture;
- (unsigned int)yearOfManufacture;
@end
