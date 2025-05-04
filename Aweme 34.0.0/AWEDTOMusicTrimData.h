@interface AWEDTOMusicTrimData : MTLModel
@property (nonatomic) double audioLengthEachPointStand;
@property (nonatomic) double audioWaveViewStartTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)audioLengthEachPointStand;
- (void)setAudioLengthEachPointStand:;
- (double)audioWaveViewStartTime;
- (void)setAudioWaveViewStartTime:;
+ (id)JSONKeyPathsByPropertyKey;
@end
