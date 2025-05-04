@interface AWESingleStickerDownloadResult : NSObject
@property (nonatomic) NSError error;
@property (nonatomic) NSString filePath;
@property (nonatomic) BOOL failed;
- (id)filePath;
- (BOOL)failed;
- (void)setError:;
- (void)setFilePath:;
- (void).cxx_destruct;
- (id)error;
- (void)setFailed:;
@end
