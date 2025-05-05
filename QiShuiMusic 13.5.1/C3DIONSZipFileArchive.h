@interface C3DIONSZipFileArchive : NSObject
- (id)archiveData;
- (void)dealloc;
- (id)initWithData:options:error:;
- (BOOL)writeToFile:options:error:;
- (BOOL)isValid;
- (void)invalidate;
- (id)initWithPath:options:error:;
- (id)initWithEntryNames:contents:properties:options:;
- (id)initWithEntryNames:dataProvider:options:;
- (id)entryNames;
- (id)contentsForEntryName:;
- (id)streamForEntryName:;
- (BOOL)writeContentsForEntryName:toFile:options:error:;
- (id)propertiesForEntryName:;
- (id)archiveStream;
@end
