@interface MFIMAPDownload : NSObject
@property (nonatomic) MFBaseFilterDataConsumer mainConsumer;
- (BOOL)isComplete;
- (unsigned int)uid;
- (void)setError:;
- (id)error;
- (void).cxx_destruct;
- (unsigned long long)expectedLength;
- (id)initWithUid:;
- (BOOL)isSuccessful;
- (unsigned long long)bytesFetched;
- (void)handleFetchResult:;
- (void)processResults;
- (void)addCommandsToPipeline:withCache:;
- (unsigned long long)lengthOfDataBeforeLineConversion;
- (id)mainConsumer;
@end
