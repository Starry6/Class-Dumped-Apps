@interface ISPurchaseReceipt : NSObject
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) BOOL isVPPLicensed;
@property (nonatomic) BOOL isRevoked;
- (BOOL)isRevoked;
- (id)expirationDate;
- (id)initWithContentsOfFile:;
- (void).cxx_destruct;
- (BOOL)isVPPLicensed;
- (BOOL)_anchorTrust:toRootCertificateIn:;
- (BOOL)_checkArray:containsCertificateWithOID:;
- (BOOL)_checkIfCertificate:containsOID:;
- (id)_copyCertificatesFromSignedData:;
- (BOOL)_decodeReceiptData:toDecodedMessage:;
- (id)_extractSignedDataFromMessage:;
- (BOOL)_parseReceiptFromMessage:;
- (void)_parseTokens:;
- (BOOL)_setPoliciesForTrust:;
- (long long)_verifySignatureForSignedData:onDate:;
+ (id)receiptWithContentsOfFile:;
@end
