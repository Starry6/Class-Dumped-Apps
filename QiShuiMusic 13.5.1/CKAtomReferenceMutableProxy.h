@interface CKAtomReferenceMutableProxy : CKXStructMutableProxyBase
- (void)setType:;
- (id)location;
- (id)timestamp;
- (void)copyFromReadProxy:;
- (void)copyFromReference:;
@end
