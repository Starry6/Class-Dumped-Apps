@interface AWEFramesUploadManager : NSObject
@property (nonatomic) NSMutableArray uploaderQueue;
@property (nonatomic) NSLock lock;
- (BOOL)removeUploader:;
- (BOOL)addUploader:;
- (id)uploaderQueue;
- (void)setUploaderQueue:;
- (id)init;
- (void)setLock:;
- (id)lock;
- (void).cxx_destruct;
+ (void)uploadOriginalFramesWithVideoId:awemeId:publishModel:uploadParameters:completion:;
+ (void)uploadOriginalFramesWithVideoIds:awemeId:publishModels:uploadParameters:completion:;
+ (id)sharedInstance;
@end
