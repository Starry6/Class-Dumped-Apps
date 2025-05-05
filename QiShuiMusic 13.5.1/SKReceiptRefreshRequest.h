@interface SKReceiptRefreshRequest : SKRequest
@property (nonatomic) NSDictionary receiptProperties;
- (void).cxx_destruct;
- (void)_start;
- (void)_handleReply:;
- (id)initWithReceiptProperties:;
- (void)_requestCompletedWithError:;
- (BOOL)_wantsExpired;
- (BOOL)_wantsRevoked;
- (BOOL)_wantsVPP;
- (id)receiptProperties;
@end
