@interface AWEHumanEnhancedAudioModel : AWEBaseApiModel
@property (nonatomic) AWEURLModel mainURL;
@property (nonatomic) double loudless;
@property (nonatomic) double peak;
@property (nonatomic) NSNumber bitRate;
- (id)mainURL;
- (double)loudless;
- (void)setLoudless:;
- (id)bitRate;
- (void).cxx_destruct;
- (void)setBitRate:;
- (double)peak;
- (void)setPeak:;
+ (id)mainURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
