@interface AWEPublishMergeVideoResult : MTLModel
@property (nonatomic) NSString UUID;
@property (nonatomic) q index;
@property (nonatomic) {CGSize=dd} canvasSize;
@property (nonatomic) {CGSize=dd} videoAssetSize;
@property (nonatomic) double videoAssetDuration;
@property (nonatomic) double videoFileSize;
@property (nonatomic) NSString taskID;
@property (nonatomic) NSString uploadVideoUrl;
@property (nonatomic) NSDictionary uploadVideoMetaData;
@property (nonatomic) NSDictionary mediaEffectInfo;
@property (nonatomic) NSNumber composePauseDuration;
@property (nonatomic) NSNumber canTranscodeInBackground;
@property (nonatomic) NSNumber didTranscodeInBackground;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)canTranscodeInBackground;
- (void)setCanTranscodeInBackground:;
- (id)didTranscodeInBackground;
- (void)setDidTranscodeInBackground:;
- (id)uploadVideoUrl;
- (id)videoAssetSize;
- (double)videoAssetDuration;
- (double)videoFileSize;
- (void)setUploadVideoUrl:;
- (void)setMediaEffectInfo:;
- (void)setComposePauseDuration:;
- (id)initWithIndex:workspace:mergePath:;
- (void)setVideoAssetSize:;
- (void)setVideoAssetDuration:;
- (void)setVideoFileSize:;
- (id)uploadVideoMetaData;
- (void)setUploadVideoMetaData:;
- (id)mediaEffectInfo;
- (id)composePauseDuration;
- (void)setIndex:;
- (id)UUID;
- (long long)index;
- (void)setUUID:;
- (void)setCanvasSize:;
- (void).cxx_destruct;
- (id)canvasSize;
- (void)setTaskID:;
- (id)taskID;
@end
