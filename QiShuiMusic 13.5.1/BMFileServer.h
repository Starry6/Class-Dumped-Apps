@interface BMFileServer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeDirectoryAtPath:reply:;
- (BOOL)entitledToAccessClientCompute:error:;
- (void)removeFileAtPath:reply:;
- (id)_initWithListener:directory:;
- (void)_configureConnection:;
- (BOOL)entitledToAccessStream:withMode:error:;
- (void)createDirectoryAtPath:reply:;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (void)sharedMemoryForFileAtPath:flags:reply:;
- (id)initWithDirectory:;
- (void)temporaryFileHandleWithProtection:reply:;
- (void)fileHandleForFileAtPath:flags:protection:reply:;
- (void)replaceFileAtPath:withFileHandle:reply:;
+ (id)fileServerForDomain:;
@end
