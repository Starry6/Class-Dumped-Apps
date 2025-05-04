@interface AWEVideoCoverRecommendTextDataLoader : NSObject
@property (nonatomic) q state;
@property (nonatomic) NSArray titleModelArray;
@property (nonatomic) AWEVideoPublishViewModel publishModel;
- (id)publishModel;
- (void)setPublishModel:;
- (id)titleModelArray;
- (void)loadDataWithPublishModel:;
- (void)setTitleModelArray:;
- (void)saveCacheWithKey:result:;
- (void)reloadData;
- (long long)state;
- (void).cxx_destruct;
- (void)setState:;
- (void)loadData;
+ (id)keyWithModel:;
+ (void)trackWithError:titleCount:;
+ (void)preUploadFrameExtractionWithPublishModel:;
@end
