@interface AWEMediaDownloadInfo : NSObject
@property (nonatomic) IESIMURLModel downloadURL;
@property (nonatomic) double estimatedFileSize;
@property (nonatomic) NSString itemID;
@property (nonatomic) @? cancelBlock;
- (double)estimatedFileSize;
- (void)setEstimatedFileSize:;
- (void)setCancelBlock:;
- (id)itemID;
- (void)setItemID:;
- (id)downloadURL;
- (id)cancelBlock;
- (void).cxx_destruct;
- (void)setDownloadURL:;
@end
