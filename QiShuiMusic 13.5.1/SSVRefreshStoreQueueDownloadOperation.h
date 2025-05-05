@interface SSVRefreshStoreQueueDownloadOperation : SSVLoadDownloadQueueOperation
@property (nonatomic) NSNumber accountID;
@property (nonatomic) NSString downloadTransactionID;
- (id)accountID;
- (void)main;
- (void).cxx_destruct;
- (id)initWithDownloadTransactionIdentifier:accountID:;
- (id)isDownloadTransactionID;
- (BOOL)_refreshDownloadWithTransactionID:accountID:bagKey:error:;
- (id)downloadTransactionID;
@end
