@interface AWEPlayletFeedModel : NSObject
@property (nonatomic) AWEPlayletSchemaModel schemaModel;
@property (nonatomic) NSNumber minRequestCursor;
@property (nonatomic) NSNumber maxRequestCursor;
@property (nonatomic) NSString playletID;
@property (nonatomic) NSMutableArray dataSource;
@property (nonatomic) BOOL loadmoreHasMore;
@property (nonatomic) NSArray recommendColorArray;
@property (nonatomic) AWEPlayletInfoModel playletInfoModel;
- (void)setLoadmoreHasMore:;
- (BOOL)loadmoreHasMore;
- (id)minRequestCursor;
- (id)maxRequestCursor;
- (void)setMaxRequestCursor:;
- (void)setMinRequestCursor:;
- (id)playletInfoModel;
- (id)playletID;
- (id)schemaModel;
- (void)setPlayletInfoModel:;
- (void)setPlayletID:;
- (id)recommendColorArray;
- (void)setRecommendColorArray:;
- (void)setSchemaModel:;
- (void).cxx_destruct;
- (void)setDataSource:;
- (id)dataSource;
@end
