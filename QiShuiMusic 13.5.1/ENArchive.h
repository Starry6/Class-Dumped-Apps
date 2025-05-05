@interface ENArchive : NSObject
@property (nonatomic) BOOL endOfArchive;
@property (nonatomic) NSString entryPath;
@property (nonatomic) S entryFileType;
- (void)dealloc;
- (void)close;
- (id)initWithPath:error:;
- (void)_closeArchive;
- (id)initWithFD:error:;
- (BOOL)advanceEntryAndReturnError:;
- (BOOL)resetAndReturnError:;
- (BOOL)endOfArchive;
- (unsigned short)entryFileType;
- (id)entryPath;
- (BOOL)_openArchiveAndReturnError:;
- (BOOL)_checkEntryAndReturnError:;
- (BOOL)readDataIntoBuffer:length:error:;
- (long long)readDataIntoBuffer:maxLength:error:;
- (BOOL)resetToCurrentEntryAndReturnError:;
- (BOOL)skipBytes:error:;
@end
