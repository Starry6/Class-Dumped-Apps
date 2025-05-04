@interface AWEPublishTaskProduct : MTLModel
@property (nonatomic) NSString taskId;
@property (nonatomic) NSArray exportedFiles;
@property (nonatomic) NSDictionary uploadedUris;
@property (nonatomic) NSArray exportedFilesWithWatermark;
- (void)setExportedFiles:;
- (void)setUploadedUris:;
- (id)uploadedUris;
- (id)exportedFiles;
- (id)exportedFilesWithWatermark;
- (void)setExportedFilesWithWatermark:;
- (void).cxx_destruct;
- (id)taskId;
- (void)setTaskId:;
+ (id)retriveProductWithTaskId:;
+ (BOOL)cacheProduct:;
+ (BOOL)invalidateCache:;
@end
