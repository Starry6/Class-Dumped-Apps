@interface AWEShareTrendingSearchModel : NSObject
@property (nonatomic) IESIMSearchTrendingModel trendingModel;
@property (nonatomic) IESIMShareInfoModel shareInfo;
@property (nonatomic) UIImage snapshotImage;
- (void)setTrendingModel:;
- (id)trendingModel;
- (id)snapshotImage;
- (id)shareInfo;
- (void).cxx_destruct;
- (void)setShareInfo:;
- (void)setSnapshotImage:;
@end
