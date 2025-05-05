@interface OSLogEventBacktraceFrame : NSObject
@property (nonatomic) NSUUID imageUUID;
@property (nonatomic) r* imageUUIDBytes;
@property (nonatomic) Q imageOffset;
- (void)dealloc;
- (id)imageUUID;
- (id)imageUUIDBytes;
- (id)initWithUUIDBytes:andOffset:;
- (unsigned long long)imageOffset;
@end
