@interface JSScript : NSObject
- (id)init;
- (id)sourceURL;
- (BOOL)isUsingBytecodeCache;
- (void)readCache;
- (unsigned int)hash;
- (long long)type;
- (id)sourceCode;
- (id)jsSourceCode;
- (BOOL)cacheBytecodeWithError:;
- (id)cachedBytecode;
- (void).cxx_destruct;
- (id)source;
- (BOOL)writeCache:;
- (id).cxx_construct;
+ (id)scriptOfType:memoryMappedFromASCIIFile:withSourceURL:andBytecodeCache:inVirtualMachine:error:;
+ (id)scriptOfType:withSource:andSourceURL:andBytecodeCache:inVirtualMachine:error:;
@end
