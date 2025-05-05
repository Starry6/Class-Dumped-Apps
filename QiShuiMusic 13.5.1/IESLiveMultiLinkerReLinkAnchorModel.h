@interface IESLiveMultiLinkerReLinkAnchorModel : IESLiveDynamicModel
@property (nonatomic) Q relinkAnchorWaitedTime;
@property (nonatomic) Q relinkAnchorPredictWaitTime;
@property (nonatomic) NSMutableArray relinkAnchorArray;
- (void)setRelinkAnchorPredictWaitTime:;
- (id)relinkAnchorArray;
- (unsigned long long)relinkAnchorPredictWaitTime;
- (unsigned long long)relinkAnchorWaitedTime;
- (void)setRelinkAnchorArray:;
- (void)setRelinkAnchorWaitedTime:;
- (void).cxx_destruct;
@end
