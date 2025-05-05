@interface VEAssetMattingResult : NSObject
@property (nonatomic) Q mattingedFrame;
@property (nonatomic) Q allMattingFrames;
@property (nonatomic) BOOL isFinished;
@property (nonatomic) AVAsset asset;
@property (nonatomic) double mattingCostTime;
@property (nonatomic) NSError errorCode;
@property (nonatomic) BOOL isNeedRefreshEffect;
- (double)mattingCostTime;
- (unsigned long long)allMattingFrames;
- (BOOL)isNeedRefreshEffect;
- (unsigned long long)mattingedFrame;
- (void)setAllMattingFrames:;
- (void)setIsNeedRefreshEffect:;
- (void)setMattingCostTime:;
- (void)setMattingedFrame:;
- (id)init;
- (id)errorCode;
- (id)asset;
- (BOOL)isFinished;
- (void)setErrorCode:;
- (void).cxx_destruct;
- (void)setAsset:;
- (void)setIsFinished:;
@end
