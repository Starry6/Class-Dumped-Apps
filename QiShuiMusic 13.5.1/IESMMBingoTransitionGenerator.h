@interface IESMMBingoTransitionGenerator : NSObject
@property (nonatomic) NSInteger type;
@property (nonatomic) NSString resourcePath;
@property (nonatomic) AVAssetImageGenerator videoGenerator;
@property (nonatomic) {bef_bingo_VideoMontage_VideoParams=iifffi} videoParam;
@property (nonatomic) NSArray generateTimes;
- (id)generateTimes;
- (void)setGenerateTimes:;
- (void)setVideoGenerator:;
- (void)setVideoParam:;
- (id)videoGenerator;
- (id)videoParam;
- (void)setType:;
- (int)type;
- (void).cxx_destruct;
- (id)resourcePath;
- (void)setResourcePath:;
@end
