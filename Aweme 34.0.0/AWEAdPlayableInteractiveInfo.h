@interface AWEAdPlayableInteractiveInfo : MTLModel
@property (nonatomic) NSString playableSceneUrl;
@property (nonatomic) AWEAdInteractiveVideoModel originalVideoInfo;
@property (nonatomic) NSArray videoList;
@property (nonatomic) AWEFeedPlayableLoadingMaskModel loadingMaskInfo;
@property (nonatomic) AWEFeedPlayableComplianceInfoModel complianceInfo;
@property (nonatomic) AWEFeedPlayableTransformBarModel transformBar;
@property (nonatomic) AWEFeedPlayableMaskModel mask;
@property (nonatomic) AWEFeedPlayableSkipButtonModel skipBtn;
@property (nonatomic) NSDictionary itemVideoMappings;
@property (nonatomic) NSArray alphaVideoList;
@property (nonatomic) q videoLength;
@property (nonatomic) AWEAdInteractiveVideoModel currentVideoInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)originalVideoInfo;
- (void)setOriginalVideoInfo:;
- (void)setVideoList:;
- (id)videoList;
- (id)complianceInfo;
- (id)currentVideoInfo;
- (void)setCurrentVideoInfo:;
- (long long)videoLength;
- (void)setVideoLength:;
- (id)loadingMaskInfo;
- (id)alphaVideoList;
- (id)skipBtn;
- (id)transformBar;
- (void)setSkipBtn:;
- (id)itemVideoMappings;
- (id)playableSceneUrl;
- (void)setComplianceInfo:;
- (void)setPlayableSceneUrl:;
- (void)setLoadingMaskInfo:;
- (void)setTransformBar:;
- (void)setItemVideoMappings:;
- (void)setAlphaVideoList:;
- (void)setMask:;
- (void).cxx_destruct;
- (id)mask;
+ (id)videoListJSONTransformer;
+ (id)interactiveVideosJSONTransformer;
+ (id)alphaVideoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
