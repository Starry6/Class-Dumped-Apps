@interface AWETeenVideoVoteUserModel : AWEBaseApiModel
@property (nonatomic) q videoCount;
@property (nonatomic) double lastFetchVoteVideoTimeStamp;
- (double)lastFetchVoteVideoTimeStamp;
- (void)setLastFetchVoteVideoTimeStamp:;
- (void)setVideoCount:;
- (long long)videoCount;
@end
