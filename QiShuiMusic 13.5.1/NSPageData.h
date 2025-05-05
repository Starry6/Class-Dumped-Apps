@interface NSPageData : NSData
- (id)initWithBytesNoCopy:length:;
- (id)initWithBytes:length:;
- (id)init;
- (void)dealloc;
- (id)data;
- (id)bytes;
- (id)initWithContentsOfMappedFile:;
- (id)initWithContentsOfFile:;
- (id)initWithData:;
- (unsigned long long)length;
- (void)_setOriginalFileInfoFromFileAttributes:;
- (id)initWithContentsOfMappedFile:withFileAttributes:;
- (id)_mappedFile;
- (unsigned long long)writePath:docInfo:errorHandler:remapContents:hardLinkPath:;
- (id)initFromSerializerStream:length:;
- (id)deserializer;
- (id)initWithDataNoCopy:;
- (unsigned long long)writeFd:;
- (unsigned long long)writeFile:;
+ (long long)_umask;
@end
