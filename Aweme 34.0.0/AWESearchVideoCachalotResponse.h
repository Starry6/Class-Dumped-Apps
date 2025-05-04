@interface AWESearchVideoCachalotResponse : AWESearchResultCachalotDataResponse
@property (nonatomic) AWESearchVideoBusinessConfigModel businessConfigModel;
@property (nonatomic) AWESearchGlobalDoodleConfigModel extraModel;
@property (nonatomic) NSArray leafModels;
- (id)extraModel;
- (void)setExtraModel:;
- (id)businessConfigModel;
- (void)setLeafModels:;
- (id)leafModels;
- (void)setBusinessConfigModel:;
- (void).cxx_destruct;
+ (id)businessConfigModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
