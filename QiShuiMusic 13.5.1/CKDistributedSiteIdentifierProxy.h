@interface CKDistributedSiteIdentifierProxy : CKXStructProxyBase
@property (nonatomic) Q size;
- (id)modifier;
- (id)identifier;
- (unsigned long long)size;
- (id)siteIdentifier;
- (unsigned long long)identifierSize;
- (void)copyIdentifierBytes:length:isNull:;
- (unsigned long long)modifierSize;
- (void)copyModifierBytes:length:isNull:;
@end
