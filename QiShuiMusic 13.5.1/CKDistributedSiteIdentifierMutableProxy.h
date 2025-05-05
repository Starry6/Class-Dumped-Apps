@interface CKDistributedSiteIdentifierMutableProxy : CKXStructMutableProxyBase
- (void)setModifier:;
- (void)setIdentifier:;
- (void)copyFromReadProxy:;
- (void)setIdentifierBytes:length:;
- (void)setModifierBytes:length:;
- (void)copyFromSiteIdentifier:;
@end
