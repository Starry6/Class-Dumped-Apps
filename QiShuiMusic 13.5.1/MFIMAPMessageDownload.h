@interface MFIMAPMessageDownload : MFIMAPCompoundDownload
- (BOOL)isComplete;
- (id)data;
- (id)initWithMessage:;
- (BOOL)partial;
- (id)message;
- (void).cxx_destruct;
- (BOOL)allowsPartialDownloads;
- (void)setAllowsPartialDownloads:;
- (BOOL)isSuccessful;
- (void)handleFetchResult:;
- (void)processResults;
- (void)addCommandsToPipeline:withCache:;
- (id)topLevelPart;
- (void)setTopLevelPart:;
- (id)_networkConverterWithConsumer:didReceiveData:;
- (void)setFetchBodyData:;
- (BOOL)fetchBodyData;
@end
