@interface IESGurdResourceStrategies : NSObject
@property (nonatomic) BOOL deleteIfDownloadFailed;
@property (nonatomic) BOOL deleteBeforeDownload;
- (BOOL)deleteBeforeDownload;
- (BOOL)deleteIfDownloadFailed;
- (void)setDeleteBeforeDownload:;
- (void)setDeleteIfDownloadFailed:;
+ (id)instanceWithDict:;
@end
