@interface IESMMStoryConfig : NSObject
@property (nonatomic) q storyMode;
@property (nonatomic) double recordFrameRate;
@property (nonatomic) double videoScale;
@property (nonatomic) double loopCount;
@property (nonatomic) AVAsset reverseAsset;
- (double)recordFrameRate;
- (id)reverseAsset;
- (void)setRecordFrameRate:;
- (void)setReverseAsset:;
- (void)setStoryMode:;
- (long long)storyMode;
- (id)init;
- (void).cxx_destruct;
- (double)loopCount;
- (double)videoScale;
- (void)setVideoScale:;
- (void)setLoopCount:;
@end
