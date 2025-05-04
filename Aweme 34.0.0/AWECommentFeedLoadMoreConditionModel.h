@interface AWECommentFeedLoadMoreConditionModel : NSObject
@property (nonatomic) BOOL listManagerIsRequesting;
@property (nonatomic) BOOL listManagerHasMore;
@property (nonatomic) q commentViewModelDataState;
- (BOOL)listManagerHasMore;
- (BOOL)listManagerIsRequesting;
- (long long)commentViewModelDataState;
- (void)setListManagerIsRequesting:;
- (void)setListManagerHasMore:;
- (void)setCommentViewModelDataState:;
@end
