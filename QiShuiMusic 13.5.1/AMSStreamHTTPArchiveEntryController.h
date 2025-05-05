@interface AMSStreamHTTPArchiveEntryController : NSObject
+ (id)buffer;
+ (id)_harFileURLsInPath:;
+ (void)ams_addEntriesForTaskInfo:;
+ (void)_updateMaxBufferSize;
+ (void)_writeEntries:toStream:;
+ (id)_footerData;
+ (BOOL)_writeHeaderToStream:;
+ (id)_headerData;
+ (BOOL)_writeData:enumeratingBytesToStream:;
+ (BOOL)_shouldWriteEntryDirectlyToDiskForURLString:;
+ (void)_periodicCleanup;
+ (id)_createNewFileWithError:outputDirectory:forCombining:;
+ (BOOL)_writeFooterToStream:;
+ (void)ams_streamEntriesToDisk;
+ (void)_streamToDiskWithEntries:;
+ (void)_performCombiningFiles:toStream:;
+ (id)ams_combineEntriesForPath:;
@end
