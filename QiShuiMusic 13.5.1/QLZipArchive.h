@interface QLZipArchive : NSObject
- (id)initWithData:error:;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithURL:error:;
- (id)fileWrapper;
- (id)libarchiveError;
- (BOOL)_reopenWithError:;
- (id)readCurrentDataWithEntry:error:;
- (void)enumerateEntriesWithHandler:;
@end
