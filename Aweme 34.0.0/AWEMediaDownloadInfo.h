@interface AWEMediaDownloadInfo : NSObject
@property (nonatomic) AWEURLModel downloadURL;
@property (nonatomic) double estimatedFileSize;
@property (nonatomic) NSString itemID;
@property (nonatomic) @? cancelBlock;
- (void)setEstimatedFileSize:;
- (double)estimatedFileSize;
- (id)itemID;
- (void)setItemID:;
- (void)setCancelBlock:;
- (void).cxx_destruct;
- (id)downloadURL;
- (void)setDownloadURL:;
- (id)cancelBlock;
@end
