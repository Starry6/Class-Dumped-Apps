@interface CKAtomProxy : CKXStructProxyBase
@property (nonatomic) Q size;
- (unsigned long long)version;
- (id)location;
- (id)references;
- (id)timestamp;
- (id)value;
- (unsigned long long)size;
- (unsigned long long)atomType;
- (unsigned char)atomBehavior;
- (unsigned long long)valueSize;
- (void)copyValueBytes:length:isNull:;
@end
