@interface AWERVLVSeriesElement : AWERVVideoInfoBaseElement
@property (nonatomic) AWERVLVSeriesView seriesView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)seriesView;
- (BOOL)isSupportMultiSeries;
- (long long)getCurrentAlbumIndex;
- (void)showAllPanelWithModel:currentSelectIndex:;
- (void)trackLongVideoShowWithSeriesIndex:;
- (void)setSeriesView:;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
@end
