@interface AWEImageAlbumAssetsExportTaskInfo : NSObject
@property (nonatomic) NSString taskID;
@property (nonatomic) BOOL hasError;
@property (nonatomic) q totalCount;
@property (nonatomic) NSString rootPath;
- (long long)totalCount;
- (BOOL)hasError;
- (void).cxx_destruct;
- (void)setTaskID:;
- (id)rootPath;
- (id)taskID;
- (void)setHasError:;
- (void)setTotalCount:;
- (void)setRootPath:;
@end
