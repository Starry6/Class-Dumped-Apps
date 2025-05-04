@interface AWEHotSearchCommentFeedParamsModel : NSObject
@property (nonatomic) q tabType;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) AWEHotSearchCommentDataSourceModel dataSource;
- (long long)tabType;
- (void)setTabType:;
- (id)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)setDataSource:;
- (id)dataSource;
@end
