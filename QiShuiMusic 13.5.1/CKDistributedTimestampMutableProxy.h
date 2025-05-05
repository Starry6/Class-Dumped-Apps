@interface CKDistributedTimestampMutableProxy : CKXStructMutableProxyBase
- (void)setClock:;
- (void)setModifier:;
- (void)setUnordered:;
- (id)distributedSiteIdentifier;
- (void)copyFromReadProxy:;
- (void)setSiteIdentifier:;
- (void)setSiteIdentifierBytes:length:;
- (void)copyFromTimestamp:;
@end
