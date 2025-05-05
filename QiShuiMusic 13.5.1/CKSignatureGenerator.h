@interface CKSignatureGenerator : NSObject
@property (nonatomic) ^v generator;
@property (nonatomic) BOOL valid;
- (id)init;
- (void)dealloc;
- (void)setValid:;
- (id)generator;
- (void)updateWithData:;
- (BOOL)isValid;
- (char *)_newSignatureByFinishingGenerator;
- (void)updateWithBytes:length:;
- (id)dataByFinishingSignature;
- (void)setGenerator:;
+ (id)signatureWithFileDescriptor:error:;
+ (BOOL)isValidSignature:;
+ (BOOL)isValidV2Signature:;
+ (id)signatureForStreamingAsset;
@end
