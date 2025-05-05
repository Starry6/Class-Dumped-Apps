@interface NSSubrangeData : NSData
- (BOOL)_isCompact;
- (id)initWithData:range:;
- (void)getBytes:;
- (id)init;
- (void)dealloc;
- (id)bytes;
- (void)getBytes:length:;
- (void)getBytes:range:;
- (unsigned long long)length;
- (id)copyWithZone:;
@end
