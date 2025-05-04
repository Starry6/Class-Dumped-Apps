@interface AWEAdLongVideoContext : NSObject
@property (nonatomic) AWEOriginalAdModel adModel;
@property (nonatomic) TTVideoEngineModel engineModel;
@property (nonatomic) double playDuration;
- (id)adModel;
- (void)setAdModel:;
- (void)setPlayDuration:;
- (void)setEngineModel:;
- (id)engineModel;
- (void).cxx_destruct;
- (double)playDuration;
@end
