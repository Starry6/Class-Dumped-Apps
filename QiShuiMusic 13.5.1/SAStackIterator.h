@interface SAStackIterator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)iterateFramesWithBacktraceStyle:block:;
- (BOOL)hasKernelStack;
- (BOOL)hasSwiftAsyncStack;
- (BOOL)hasUserStack;
- (void).cxx_destruct;
- (BOOL)hasStack;
@end
