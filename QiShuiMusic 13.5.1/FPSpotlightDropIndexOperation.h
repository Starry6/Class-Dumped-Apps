@interface FPSpotlightDropIndexOperation : FPOperation
- (id)operationDescription;
- (void)main;
- (void).cxx_destruct;
- (id)initWithIndexer:index:domainID:reason:;
+ (void)deleteSearchableItemsAndClearClientStateWithDomainIdentifier:index:completionHandler:;
@end
