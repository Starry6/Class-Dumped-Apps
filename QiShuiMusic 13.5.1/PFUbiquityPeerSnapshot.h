@interface PFUbiquityPeerSnapshot : NSObject
- (void)dealloc;
- (long long)compare:;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithTranasctionEntry:andLogSnapshot:;
- (id)initWithExportingPeerID:logSnapshot:transactionNumber:transactionDate:andKnowledgeVector:;
@end
