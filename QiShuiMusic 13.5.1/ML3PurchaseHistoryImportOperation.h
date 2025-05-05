@interface ML3PurchaseHistoryImportOperation : ML3DAAPImportOperation
- (void)main;
- (unsigned long long)importSource;
- (id)importItemFromDAAPElement:;
- (void)updateImportProgress:;
- (BOOL)_performPurchaseHistoryImportWithTransaction:;
@end
