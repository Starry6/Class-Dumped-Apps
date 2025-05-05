@interface MTLDynamicLibraryContainer : NSObject
- (void)dealloc;
- (id)release;
- (BOOL)serializeToURL:options:error:;
- (id)initWithLibrary:binaryData:device:error:;
- (id)initWithURL:device:options:error:;
- (id)airData;
@end
