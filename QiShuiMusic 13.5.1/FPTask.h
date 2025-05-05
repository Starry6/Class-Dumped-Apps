@interface FPTask : NSObject
@property (nonatomic) NSArray argv;
@property (nonatomic) NSFileHandle standardOutput;
@property (nonatomic) NSFileHandle standardError;
@property (nonatomic) NSInteger waitStatus;
- (id)init;
- (void)setStandardError:;
- (void)setStandardOutput:;
- (void).cxx_destruct;
- (id)standardOutput;
- (id)standardError;
- (void)setCommand:;
- (void)setCommandWithArguments:;
- (int)exec;
- (void)resetRedirect;
- (id)argv;
- (void)setArgv:;
- (int)waitStatus;
- (int)_prepareRedirections:;
- (int)execAsync;
+ (id)taskWithCommand:;
+ (id)taskWithCommandWithArguments:;
+ (id)sanitizeStringForFilename:;
+ (id)taskWithRedirectedOutputAndCommand:;
+ (id)taskWithArguments:;
@end
