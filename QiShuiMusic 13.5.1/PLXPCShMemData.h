@interface PLXPCShMemData : NSData
- (void)dealloc;
- (id)bytes;
- (id)description;
- (unsigned long long)length;
- (id)initWithXPCShmem:;
- (id)initWithXPCShmem:length:;
@end
