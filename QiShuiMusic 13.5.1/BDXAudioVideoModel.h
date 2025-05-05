@interface BDXAudioVideoModel : NSObject
@property (nonatomic) Q encryptType;
@property (nonatomic) Q quality;
@property (nonatomic) TTVideoEngineModel videoEngineModel;
- (void)setEncryptType:;
- (unsigned long long)_encryptType:;
- (unsigned long long)_quality:;
- (unsigned long long)encryptType;
- (void)setVideoEngineModel:;
- (id)videoEngineModel;
- (unsigned long long)quality;
- (void)setQuality:;
- (void).cxx_destruct;
- (id)initWithJSONDict:;
@end
