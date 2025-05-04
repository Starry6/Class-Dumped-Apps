@interface AWESearchMusicCachalotResponse : AWESearchResultCachalotDataResponse
@property (nonatomic) AWESearchMusicBusinessConfigModel businessConfigModel;
@property (nonatomic) NSArray leafModels;
- (id)businessConfigModel;
- (void)setLeafModels:;
- (id)leafModels;
- (void)setBusinessConfigModel:;
- (void).cxx_destruct;
+ (id)businessConfigModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
