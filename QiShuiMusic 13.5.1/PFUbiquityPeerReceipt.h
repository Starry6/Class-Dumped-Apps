@interface PFUbiquityPeerReceipt : PFUbiquitySafeSaveFile
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)loadFileFromLocation:error:;
- (BOOL)writeFileToLocation:error:;
- (id)initWithLocalPeerID:receiptPeerID:storeName:modelVersionHash:andUbiquityRootLocation:;
- (id)initWithLocalPeerID:andKnowledgeVector:forPeerID:storeName:modelVersionHash:andUbiquityRootLocation:;
- (id)initWithLocalPeerID:andReceiptFileLocation:;
@end
