@interface AWEHangoutDataControllerPayload : NSObject
@property (nonatomic) AWEAwemeModel itemModel;
@property (nonatomic) NSNumber tabID;
@property (nonatomic) NSNumber fetchPullCount;
@property (nonatomic) NSNumber loadMoreCount;
- (id)loadMoreCount;
- (id)itemModel;
- (void)setItemModel:;
- (void)setLoadMoreCount:;
- (void)setTabID:;
- (id)fetchPullCount;
- (void)setFetchPullCount:;
- (void).cxx_destruct;
- (id)tabID;
@end
