@interface AWEIMGroupImpl.FriendsAlbumRefreshHandler : AWEIMMsgBaseRefreshHandler
- (BOOL)supportRefreshMessage:;
- (BOOL)supportRefreshStrategy:;
- (void)refrshResourceStateFor:forViewModels:strategy:;
- (id)initWithComponentCenter:;
- (id)init;
- (void).cxx_destruct;
+ (BOOL)supportRefresh;
@end
