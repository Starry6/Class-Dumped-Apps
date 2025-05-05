@interface IOAccelMTLEvent : NSObject
- (void)dealloc;
- (unsigned int)encodeKernelSignalEventCommandArgs:value:;
- (unsigned int)encodeKernelWaitEventCommandArgs:value:;
- (unsigned int)encodeKernelWaitEventCommandArgs:value:timeout:;
- (id)initWithShared:;
@end
