@interface CKAtomMutableProxy : CKXStructMutableProxyBase
- (void)setVersion:;
- (id)location;
- (void)setValue:;
- (id)references;
- (id)timestamp;
- (void)copyFromReadProxy:;
- (void)setAtomBehavior:;
- (void)setAtomType:;
- (void)setValueBytes:length:;
@end
