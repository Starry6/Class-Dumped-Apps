@interface AWEMusicResourceDownloadAsyncTask : NSObject
@property (nonatomic) AWERecordResourceMusicModel musicModelConfig;
@property (nonatomic) @? resourceDownloadCompletion;
@property (nonatomic) NSString taskIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setResourceDownloadCompletion:;
- (id)resourceDownloadCompletion;
- (BOOL)currentTaskIsExistWith:;
- (void)setMusicModelConfig:;
- (void)downloadMusic;
- (void)downloadMusicResourceWithMusicModel:error:;
- (id)musicModelConfig;
- (unsigned long long)taskType;
- (id)taskIdentifier;
- (void).cxx_destruct;
- (void)setTaskIdentifier:;
+ (id)downloadTaskWithResourceModel:completion:;
@end
