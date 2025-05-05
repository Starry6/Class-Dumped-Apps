@interface PLCloudPhotoLibraryBatchContainer : NSObject
@property (nonatomic) CPLChangeBatch batch;
@property (nonatomic) Q retryCount;
@property (nonatomic) BOOL wasSplit;
@property (nonatomic) BOOL reachedMinSplit;
@property (nonatomic) BOOL wasFixed;
- (id)init;
- (id)batch;
- (void)setReachedMinSplit:;
- (BOOL)wasFixed;
- (id)lastAddedRecord;
- (void)setRetryCount:;
- (void)incrementRetryCount;
- (void)addRecord:;
- (void)setWasFixed:;
- (unsigned long long)retryCount;
- (void)setBatch:;
- (void).cxx_destruct;
- (id)description;
- (id)batchesSplitForError;
- (BOOL)wasSplit;
- (void)setWasSplit:;
- (unsigned long long)count;
- (BOOL)reachedMinSplit;
@end
