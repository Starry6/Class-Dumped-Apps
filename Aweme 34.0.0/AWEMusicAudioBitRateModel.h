@interface AWEMusicAudioBitRateModel : AWEBaseApiModel
@property (nonatomic) NSString gearName;
@property (nonatomic) q qualityType;
@property (nonatomic) NSNumber bitRate;
@property (nonatomic) AWEMusicURLModel playAddr;
- (id)playAddr;
- (id)gearName;
- (void)setGearName:;
- (void)setPlayAddr:;
- (id)bitRate;
- (void).cxx_destruct;
- (long long)qualityType;
- (void)setBitRate:;
- (void)setQualityType:;
+ (id)playAddrJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
