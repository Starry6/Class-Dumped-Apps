@interface PLJournalFile : NSObject
@property (nonatomic) PLJournal journal;
@property (nonatomic) NSURL url;
- (BOOL)copyToURL:error:;
- (id)journal;
- (id)url;
- (BOOL)fileExists;
- (void)setJournal:;
- (void).cxx_destruct;
- (id)initWithURL:journal:;
- (BOOL)openForReadingUsingBlock:error:;
- (BOOL)enumerateEntriesUsingBlock:decodePayload:error:;
- (BOOL)openForWritingUsingBlock:error:;
- (BOOL)appendEntries:error:;
- (BOOL)removeFileWithError:;
- (BOOL)createEmptyFileWithError:;
- (BOOL)moveToURL:error:;
- (BOOL)fileSize:error:;
- (BOOL)allocatedFileSize:error:;
- (BOOL)_fileSize:forKey:error:;
+ (BOOL)fileExistsAtURL:;
+ (BOOL)removeURL:error:;
+ (BOOL)createEmptyURL:error:;
+ (BOOL)moveURL:toURL:error:;
+ (BOOL)copyURL:toURL:error:;
+ (BOOL)writeData:toURL:atomically:error:;
@end
