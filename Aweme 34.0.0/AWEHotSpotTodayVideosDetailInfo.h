@interface AWEHotSpotTodayVideosDetailInfo : AWEBaseApiModel
@property (nonatomic) NSString detailTitle;
@property (nonatomic) AWEURLModel urlModel;
- (id)urlModel;
- (void)setUrlModel:;
- (void).cxx_destruct;
- (void)setDetailTitle:;
- (id)detailTitle;
+ (id)urlModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
