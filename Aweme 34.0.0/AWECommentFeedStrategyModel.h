@interface AWECommentFeedStrategyModel : AWEBaseApiModel
@property (nonatomic) NSNumber commentFeedCanLoadMore;
@property (nonatomic) NSNumber picCursor;
@property (nonatomic) NSNumber loadMoreCount;
@property (nonatomic) NSNumber commentCount;
- (id)loadMoreCount;
- (id)picCursor;
- (id)commentFeedCanLoadMore;
- (void)setLoadMoreCount:;
- (void)setCommentFeedCanLoadMore:;
- (void)setPicCursor:;
- (void).cxx_destruct;
- (id)commentCount;
- (void)setCommentCount:;
+ (id)JSONKeyPathsByPropertyKey;
@end
