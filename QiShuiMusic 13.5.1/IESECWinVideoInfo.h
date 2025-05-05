@interface IESECWinVideoInfo : MTLModel
@property (nonatomic) IESECURLModel videoCover;
@property (nonatomic) IESECURLModel videoPlayAddr;
@property (nonatomic) q videoDuration;
@property (nonatomic) NSString contentTitle;
@property (nonatomic) double cuttingRatio;
@property (nonatomic) double maxPlayDuration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)maxPlayDuration;
- (double)cuttingRatio;
- (void)setCuttingRatio:;
- (void)setMaxPlayDuration:;
- (void)setVideoCover:;
- (void)setVideoPlayAddr:;
- (id)videoCover;
- (id)videoPlayAddr;
- (long long)videoDuration;
- (void).cxx_destruct;
- (id)contentTitle;
- (void)setContentTitle:;
- (void)setVideoDuration:;
+ (id)JSONKeyPathsByPropertyKey;
@end
