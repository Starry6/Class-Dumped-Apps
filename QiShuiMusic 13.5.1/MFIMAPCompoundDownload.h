@interface MFIMAPCompoundDownload : MFIMAPDownload
- (BOOL)isComplete;
- (void).cxx_destruct;
- (unsigned long long)expectedLength;
- (BOOL)isSuccessful;
- (unsigned long long)bytesFetched;
- (void)processResults;
- (void)addCommandsToPipeline:withCache:;
- (unsigned long long)lengthOfDataBeforeLineConversion;
- (id)subdownloads;
- (void)addSubdownload:;
- (void)removeSubdownload:;
@end
