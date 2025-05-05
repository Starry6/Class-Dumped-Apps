@interface PBMutableData : NSMutableData
- (void)dealloc;
- (id)bytes;
- (unsigned long long)length;
- (void)setLength:;
- (id)mutableBytes;
- (id)initWithCapacity:;
@end
