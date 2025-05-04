@interface AWEHotPointDataConfig : NSObject
@property (nonatomic) AWENewHotSearchModel hotSpotModel;
@property (nonatomic) BOOL responseHasMore;
@property (nonatomic) NSNumber offset;
@property (nonatomic) NSNumber foldOffset;
- (id)hotSpotModel;
- (BOOL)isAD;
- (void)setHotSpotModel:;
- (id)keyWord;
- (id)itemIDList;
- (long long)isTrending;
- (void)setResponseHasMore:;
- (BOOL)responseHasMore;
- (id)foldOffset;
- (void)setFoldOffset:;
- (id)init;
- (void)setOffset:;
- (id)offset;
- (void).cxx_destruct;
+ (id)initialConfig;
+ (id)initialConfigWithExpandRelatedSpotModel:;
@end
