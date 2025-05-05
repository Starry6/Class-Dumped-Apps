@interface CKAssetReuploadExpectedProperties : NSObject
@property (nonatomic) NSData fileSignature;
@property (nonatomic) NSData referenceSignature;
@property (nonatomic) NSData assetKey;
- (id)referenceSignature;
- (id)fileSignature;
- (void)setReferenceSignature:;
- (id)initWithCoder:;
- (id)assetKey;
- (id)CKPropertiesDescription;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)setAssetKey:;
- (void)setFileSignature:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
