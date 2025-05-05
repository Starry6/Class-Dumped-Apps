@interface VMUTaskThreadStates : NSObject
@property (nonatomic) I threadCount;
@property (nonatomic) I threadStateSize;
- (void)dealloc;
- (unsigned int)threadStateSize;
- (unsigned int)threadCount;
- (unsigned long long)stackPointerForThreadNum:;
- (id)initWithPid:task:;
- (id)threadStateForThreadNum:;
@end
