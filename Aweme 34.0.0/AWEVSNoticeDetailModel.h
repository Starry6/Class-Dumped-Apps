@interface AWEVSNoticeDetailModel : AWEBaseApiModel
@property (nonatomic) NSString vsSchemaUrl;
@property (nonatomic) NSNumber vs;
@property (nonatomic) NSNumber episodeId;
- (id)vs;
- (id)vsSchemaUrl;
- (void)setVs:;
- (void)setVsSchemaUrl:;
- (void).cxx_destruct;
- (id)episodeId;
- (void)setEpisodeId:;
+ (id)JSONKeyPathsByPropertyKey;
@end
