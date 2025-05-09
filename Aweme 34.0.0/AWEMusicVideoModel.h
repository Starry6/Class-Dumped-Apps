@interface AWEMusicVideoModel : NSObject
@property (nonatomic) NSString mediaID;
@property (nonatomic) AWEMusicVideoEngineModel videoEngineModel;
@property (nonatomic) NSNumber expireTime;
@property (nonatomic) NSString url;
@property (nonatomic) AWEMusicVideoModelPreview preview;
@property (nonatomic) q preRiskResult;
@property (nonatomic) NSString preRiskResultLogId;
@property (nonatomic) q riskResult;
@property (nonatomic) NSString riskResultLogId;
- (id)videoEngineModel;
- (long long)riskResult;
- (void)setRiskResult:;
- (void)setVideoEngineModel:;
- (void)setPreRiskResult:;
- (id)initWithMediaID:videoModel:url:expireTime:preivew:;
- (long long)preRiskResult;
- (id)preRiskResultLogId;
- (void)setPreRiskResultLogId:;
- (id)riskResultLogId;
- (void)setRiskResultLogId:;
- (id)preview;
- (BOOL)isExpired;
- (void)setUrl:;
- (void)setPreview:;
- (void).cxx_destruct;
- (id)url;
- (id)expireTime;
- (BOOL)isVerified;
- (void)setExpireTime:;
- (id)mediaID;
- (void)setMediaID:;
@end
