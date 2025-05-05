@interface IESKeyframeTimeAndCountInfo : NSObject
@property (nonatomic) Q earliestTime;
@property (nonatomic) Q latestTime;
@property (nonatomic) Q allKeyFrameCount;
- (unsigned long long)allKeyFrameCount;
- (unsigned long long)earliestTime;
- (unsigned long long)latestTime;
- (void)setAllKeyFrameCount:;
- (void)setEarliestTime:;
- (void)setLatestTime:;
- (id)init;
- (void)reset;
@end
