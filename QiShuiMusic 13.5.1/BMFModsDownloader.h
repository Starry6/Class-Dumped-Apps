@interface BMFModsDownloader : NSObject
@property (nonatomic) DAVResourceManager_OC resourceManager_;
@property (nonatomic) NSString modelPath_;
- (int)download::::::::::::;
- (id)modelPath_;
- (id)resourceManager_;
- (void)setModelPath_:;
- (void)setResourceManager_:;
- (id)waitAndGetSourcePath;
- (void)setStatus:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
