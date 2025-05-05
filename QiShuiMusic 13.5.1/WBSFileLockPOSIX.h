@interface WBSFileLockPOSIX : NSObject
- (id)initWithFileDescriptor:;
- (void)dealloc;
- (void)releaseLock;
@end
