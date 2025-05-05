@interface MLMultiArrayAsNSArrayWrapper : NSArray
@property (nonatomic) MLMultiArray multiArray;
- (id)objectAtIndex:;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)multiArray;
- (void)setMultiArray:;
- (id)initWrappingMultiArray:;
@end
