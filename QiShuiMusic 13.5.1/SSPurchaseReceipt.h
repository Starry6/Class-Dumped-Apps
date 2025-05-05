@interface SSPurchaseReceipt : NSObject
@property (nonatomic) BOOL isValid;
@property (nonatomic) BOOL isVPPLicensed;
@property (nonatomic) BOOL isRevoked;
@property (nonatomic) NSDate expirationDate;
- (BOOL)isRevoked;
- (id)expirationDate;
- (id)initWithContentsOfFile:;
- (BOOL)isValid;
- (void).cxx_destruct;
- (BOOL)isVPPLicensed;
- (id)initWithContainerPath:;
- (BOOL)receiptExpired;
+ (void)getReceiptPathWithCompletionBlock:;
+ (id)receiptPathForProxy:;
+ (int)vppStateFlagsWithProxy:;
@end
