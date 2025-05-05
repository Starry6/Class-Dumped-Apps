@interface CalOSLogWriter : CalLogWriter
- (void)write:;
- (id)initWithParameters:;
- (void).cxx_destruct;
- (void)_configureOSLogClient;
- (void)_configureAutoLogNamespaces;
- (void)_logStringInChunks:;
- (unsigned long long)_indexToSplitOnForIndex:chunkBytes:;
+ (id)autoLogNamespaces;
@end
