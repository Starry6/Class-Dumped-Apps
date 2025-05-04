@interface AWELiveVSEpisodeMod : AWEBaseApiModel
@property (nonatomic) q episodeStage;
@property (nonatomic) q episodeRecordType;
@property (nonatomic) q episodeType;
@property (nonatomic) q episodeSubType;
- (long long)episodeStage;
- (void)setEpisodeStage:;
- (long long)episodeRecordType;
- (void)setEpisodeRecordType:;
- (long long)episodeSubType;
- (void)setEpisodeSubType:;
- (void)setEpisodeType:;
- (long long)episodeType;
+ (id)JSONKeyPathsByPropertyKey;
@end
