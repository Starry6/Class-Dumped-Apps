@interface AWEIMMsgHotSpotCommentShareRefreshHandler : AWEIMMsgBaseRefreshHandler
- (id)initWithComponentCenter:;
- (BOOL)supportRefreshMessage:;
- (BOOL)supportRefreshStrategy:;
- (void)refrshResourceStateFor:forViewModels:strategy:;
+ (BOOL)supportRefresh;
+ (long long)getRefreshHandlerType;
@end
