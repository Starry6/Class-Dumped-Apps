@interface NSBinaryObjectStoreFile : NSObject
- (void)dealloc;
- (BOOL)_writeMetadataData:andMapDataData:toFile:error:;
@end
