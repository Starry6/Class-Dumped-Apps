@interface MFIMAPSimpleDownload : MFIMAPDownload
- (BOOL)isComplete;
- (void)setError:;
- (id)error;
- (void).cxx_destruct;
- (id)section;
- (unsigned long long)expectedLength;
- (BOOL)isSuccessful;
- (unsigned long long)bytesFetched;
- (void)handleFetchResult:;
- (void)processResults;
- (void)addCommandsToPipeline:withCache:;
- (unsigned long long)lengthOfDataBeforeLineConversion;
- (id)initWithUid:section:length:lengthIsKnown:range:consumer:;
- (id)initWithUid:section:estimatedLength:consumer:;
- (id)initWithUid:section:length:consumer:;
- (id)initWithUid:section:range:consumer:;
@end
