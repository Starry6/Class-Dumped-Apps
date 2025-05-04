@interface AWETeenHotSpotFeedModel : NSObject
@property (nonatomic) NSMutableArray dataSource;
@property (nonatomic) AWETeenHotSpotModel hotSpotModel;
@property (nonatomic) NSString hotID;
@property (nonatomic) NSString version;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL loadmoreHasMore;
@property (nonatomic) Q lastViewIndex;
- (void)setLoadmoreHasMore:;
- (BOOL)loadmoreHasMore;
- (id)hotSpotModel;
- (void)setHotSpotModel:;
- (void)setLastViewIndex:;
- (unsigned long long)lastViewIndex;
- (long long)totalVideoCount;
- (void)setHotID:;
- (id)hotID;
- (id)cursor;
- (id)init;
- (id)version;
- (void)setCursor:;
- (void)setVersion:;
- (void).cxx_destruct;
- (void)setDataSource:;
- (id)dataSource;
@end
