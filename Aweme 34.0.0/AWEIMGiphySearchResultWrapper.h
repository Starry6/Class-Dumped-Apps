@interface AWEIMGiphySearchResultWrapper : NSObject
@property (nonatomic) BOOL isLoadingMore;
@property (nonatomic) NSArray results;
@property (nonatomic) NSString searchKeyword;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q offset;
@property (nonatomic) q type;
@property (nonatomic) q total;
- (id)searchKeyword;
- (BOOL)isLoadingMore;
- (void)setIsLoadingMore:;
- (void)setSearchKeyword:;
- (void)setResults:;
- (id)results;
- (void)setOffset:;
- (long long)offset;
- (void)setHasMore:;
- (BOOL)hasMore;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (long long)total;
- (void)setTotal:;
@end
