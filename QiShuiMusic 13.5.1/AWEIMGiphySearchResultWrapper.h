@interface AWEIMGiphySearchResultWrapper : NSObject
@property (nonatomic) BOOL isLoadingMore;
@property (nonatomic) NSArray results;
@property (nonatomic) NSString searchKeyword;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q offset;
@property (nonatomic) q type;
@property (nonatomic) q total;
- (BOOL)isLoadingMore;
- (id)searchKeyword;
- (void)setIsLoadingMore:;
- (void)setSearchKeyword:;
- (void)setOffset:;
- (void)setType:;
- (void)setHasMore:;
- (long long)offset;
- (id)results;
- (long long)type;
- (void).cxx_destruct;
- (BOOL)hasMore;
- (long long)total;
- (void)setResults:;
- (void)setTotal:;
@end
