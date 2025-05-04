@interface AWEActivityDataAdapter : NSObject
@property (nonatomic) AWEActivityDataModel allPageModel;
@property (nonatomic) AWEActivityDataModel feedPageDataModel;
@property (nonatomic) AWEActivityDataModel detailPageDataModel;
- (id)currentActivityDataModel;
- (void)handleRawData:completion:;
- (void)cleanActivityDataModel;
- (id)detailPageActivityDataModel;
- (id)feedPageActivityDataModel;
- (void)setAllPageModel:;
- (id)allPageModel;
- (void)splitActivityDataModel;
- (BOOL)isShowInFeedPage:;
- (BOOL)isShowInDetailPage:;
- (void)setFeedPageDataModel:;
- (void)setDetailPageDataModel:;
- (id)feedPageDataModel;
- (id)detailPageDataModel;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
