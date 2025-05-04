@interface AWEHangoutSingleFeedDataControllerPayload : NSObject
@property (nonatomic) NSArray modelsArray;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) q miniDetailType;
@property (nonatomic) NSNumber isOuter;
@property (nonatomic) NSNumber refreshCount;
@property (nonatomic) NSNumber loadMoreCount;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)modelsArray;
- (id)loadMoreCount;
- (id)isOuter;
- (void)setLoadMoreCount:;
- (void)setIsOuter:;
- (void)setMiniDetailType:;
- (void)setModelsArray:;
- (long long)miniDetailType;
- (void).cxx_destruct;
- (id)refreshCount;
- (void)setRefreshCount:;
@end
