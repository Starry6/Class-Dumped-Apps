@interface AWEIMFTSResult : NSObject
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q lastSortOrder;
@property (nonatomic) NSArray resultDatas;
- (long long)lastSortOrder;
- (void)setLastSortOrder:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (void)setResultDatas:;
- (id)resultDatas;
@end
