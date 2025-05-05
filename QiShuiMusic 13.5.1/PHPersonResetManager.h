@interface PHPersonResetManager : NSObject
@property (nonatomic) @? progressHandler;
@property (nonatomic) Q batchSize;
@property (nonatomic) BOOL requiresPhotoAnalysisReset;
- (void)setProgressHandler:;
- (id)progressHandler;
- (id)initWithPhotoLibrary:;
- (void)dealloc;
- (unsigned long long)batchSize;
- (void)setBatchSize:;
- (void).cxx_destruct;
- (void)waitUntilResetIsComplete;
- (void)resetPersonsWithCompletionHandler:;
- (void)resetPersons:completionHandler:;
- (BOOL)requiresPhotoAnalysisReset;
- (void)setRequiresPhotoAnalysisReset:;
@end
