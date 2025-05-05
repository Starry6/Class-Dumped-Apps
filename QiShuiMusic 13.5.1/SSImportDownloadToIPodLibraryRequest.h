@interface SSImportDownloadToIPodLibraryRequest : SSRequest
@property (nonatomic) SSDownloadMetadata downloadMetadata;
@property (nonatomic) SSPurchaseResponse purchaseResponse;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (void).cxx_destruct;
- (id)initWithPurchase:;
- (id)initWithDownloadMetadata:;
- (void)startWithResponseBlock:;
- (id)downloadMetadata;
- (id)purchaseResponse;
@end
