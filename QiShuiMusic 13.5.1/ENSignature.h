@interface ENSignature : NSObject
@property (nonatomic) NSString appleBundleID;
@property (nonatomic) NSString androidBundleID;
@property (nonatomic) I batchNumber;
@property (nonatomic) I batchCount;
@property (nonatomic) NSString keyID;
@property (nonatomic) NSString keyVersion;
@property (nonatomic) NSString signatureAlgorithm;
@property (nonatomic) NSData signatureData;
- (void)encodeWithXPCObject:;
- (id)initWithXPCObject:error:;
- (void)setKeyID:;
- (id)keyID;
- (id)signatureAlgorithm;
- (void).cxx_destruct;
- (id)description;
- (void)setSignatureAlgorithm:;
- (id)signatureData;
- (unsigned int)batchNumber;
- (void)setSignatureData:;
- (unsigned int)batchCount;
- (void)setBatchCount:;
- (id)initWithBytes:length:error:;
- (void)setBatchNumber:;
- (void)setKeyVersion:;
- (id)keyVersion;
- (id)appleBundleID;
- (BOOL)_readSignatureInfoPtr:length:error:;
- (BOOL)encodeWithProtobufCoder:error:;
- (BOOL)_encodeInfoWithProtobufCoder:error:;
- (void)setAppleBundleID:;
- (id)androidBundleID;
- (void)setAndroidBundleID:;
@end
