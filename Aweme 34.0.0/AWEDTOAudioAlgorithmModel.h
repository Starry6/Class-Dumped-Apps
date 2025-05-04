@interface AWEDTOAudioAlgorithmModel : MTLModel
@property (nonatomic) AWEDTOLoudnessEqualizationModel voiceLEModel;
@property (nonatomic) AWEDTOLoudnessEqualizationModel bgmLEModel;
@property (nonatomic) q recordBgmDelay;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)voiceLEModel;
- (void)setVoiceLEModel:;
- (id)bgmLEModel;
- (void)setBgmLEModel:;
- (long long)recordBgmDelay;
- (void)setRecordBgmDelay:;
- (void).cxx_destruct;
+ (id)voiceLEModelJSONTransformer;
+ (id)bgmLEModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
