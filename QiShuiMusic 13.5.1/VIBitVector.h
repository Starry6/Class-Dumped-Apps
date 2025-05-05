@interface VIBitVector : NSObject
@property (nonatomic) Q numberOfBits;
- (void)dealloc;
- (id)data;
- (id)initWithData:;
- (id)initWithNumberOfBits:;
- (void)setAtIndex:;
- (void)clearAtIndex:;
- (BOOL)checkAtIndex:;
- (unsigned long long)numberOfBits;
@end
