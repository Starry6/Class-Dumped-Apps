@interface AWEIMRedPacketUploadContext : NSObject
@property (nonatomic) NSString uploadId;
@property (nonatomic) NSString imagePath;
@property (nonatomic) NSArray imageDataArray;
@property (nonatomic) NSString videoPath;
@property (nonatomic) q fileType;
@property (nonatomic) @? completion;
- (id)imageDataArray;
- (void)setImageDataArray:;
- (long long)fileType;
- (id)imagePath;
- (id)completion;
- (void)setCompletion:;
- (void)setFileType:;
- (void).cxx_destruct;
- (void)setImagePath:;
- (void)setVideoPath:;
- (id)videoPath;
- (void)setUploadId:;
- (id)uploadId;
@end
