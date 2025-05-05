@interface TTAVPreloaderItem : NSObject
@property (nonatomic) NSString vid;
@property (nonatomic) NSString URL;
@property (nonatomic) NSString filePath;
@property (nonatomic) q resolution;
@property (nonatomic) NSString fileKey;
@property (nonatomic) double urlGenerateTime;
@property (nonatomic) NSInteger supportedResolutionMask;
@property (nonatomic) q taskId;
- (void)setVid:;
- (id)vid;
- (id)fileKey;
- (double)urlGenerateTime;
- (void)setFileKey:;
- (void)setSupportedResolutionMask:;
- (void)setUrlGenerateTime:;
- (int)supportedResolutionMask;
- (id)supportedResolutionTypes;
- (id)filePath;
- (void)setResolution:;
- (long long)resolution;
- (void)setFilePath:;
- (long long)taskId;
- (void).cxx_destruct;
- (void)setURL:;
- (id)URL;
- (void)setTaskId:;
@end
