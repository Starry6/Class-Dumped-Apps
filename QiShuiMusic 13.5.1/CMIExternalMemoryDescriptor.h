@interface CMIExternalMemoryDescriptor : NSObject
@property (nonatomic) Q memSize;
@property (nonatomic) NSInteger allocatorType;
- (unsigned long long)memSize;
- (void)setMemSize:;
- (int)allocatorType;
- (id)initWithMemSize:allocatorType:;
- (void)setAllocatorType:;
@end
