@interface AWEMediumVideoPreloadModel : NSObject
@property (nonatomic) double bufferTime;
@property (nonatomic) double playTime;
@property (nonatomic) double bufferPercent;
@property (nonatomic) NSArray models;
@property (nonatomic) AWEAwemeModel currentModel;
- (void)setPlayTime:;
- (void)setBufferTime:;
- (void)setBufferPercent:;
- (double)bufferTime;
- (double)bufferPercent;
- (double)playTime;
- (void)setModels:;
- (void).cxx_destruct;
- (id)models;
- (id)currentModel;
- (void)setCurrentModel:;
@end
