@interface AWEVideoHallMoreFeedResponseModel : AWEBaseApiModel
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray previewList;
- (id)previewList;
- (void)setPreviewList:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
+ (id)previewListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
