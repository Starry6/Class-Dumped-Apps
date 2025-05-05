@interface BRTask : NSObject
@property (nonatomic) NSArray argv;
@property (nonatomic) NSString redirectStdoutToFileAtPath;
@property (nonatomic) NSInteger redirectStdoutToFileDescriptor;
@property (nonatomic) NSString redirectStderrToFileAtPath;
@property (nonatomic) NSInteger redirectStderrToFileDescriptor;
@property (nonatomic) NSInteger waitStatus;
- (id)init;
- (void).cxx_destruct;
- (void)setCommand:;
- (void)setCommandWithArguments:;
- (int)exec;
- (void)resetRedirect;
- (id)argv;
- (void)setArgv:;
- (id)redirectStdoutToFileAtPath;
- (void)setRedirectStdoutToFileAtPath:;
- (int)redirectStdoutToFileDescriptor;
- (void)setRedirectStdoutToFileDescriptor:;
- (id)redirectStderrToFileAtPath;
- (void)setRedirectStderrToFileAtPath:;
- (int)redirectStderrToFileDescriptor;
- (void)setRedirectStderrToFileDescriptor:;
- (int)waitStatus;
+ (id)taskWithCommand:;
+ (id)taskWithCommandWithArguments:;
+ (id)sanitizeStringForFilename:;
@end
