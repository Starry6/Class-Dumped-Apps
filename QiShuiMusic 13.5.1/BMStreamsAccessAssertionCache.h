@interface BMStreamsAccessAssertionCache : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)assertionForAccessDescriptor:;
- (id)createAssertionForAccessDescriptor:extensionToken:;
- (id)_makeAssertionWithDescriptor:extensionToken:;
+ (id)sharedCache;
@end
