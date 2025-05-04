@interface AWEShareSchemaEpisodeExtraModel : AWEBaseApiModel
@property (nonatomic) NSNumber episodeRecordType;
@property (nonatomic) NSNumber episodeStage;
@property (nonatomic) NSNumber episodeSubType;
@property (nonatomic) NSNumber episodeType;
- (id)episodeStage;
- (void)setEpisodeStage:;
- (id)episodeRecordType;
- (void)setEpisodeRecordType:;
- (id)episodeSubType;
- (void)setEpisodeSubType:;
- (void)setEpisodeType:;
- (id)episodeType;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
