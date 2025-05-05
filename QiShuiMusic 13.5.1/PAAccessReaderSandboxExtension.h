@interface PAAccessReaderSandboxExtension : NSObject
@property (nonatomic) NSString path;
- (id)path;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithToken:forPath:error:;
- (id)initWithHandle:forRootDirectory:;
@end
