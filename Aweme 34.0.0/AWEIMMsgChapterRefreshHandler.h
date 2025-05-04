@interface AWEIMMsgChapterRefreshHandler : AWEIMMsgBaseRefreshHandler
- (id)initWithComponentCenter:;
- (BOOL)supportRefreshMessage:;
- (BOOL)supportRefreshStrategy:;
- (void)refrshResourceStateFor:forViewModels:strategy:;
+ (BOOL)supportRefresh;
+ (long long)getRefreshHandlerType;
+ (id)getChapterMessageModel:;
+ (void)setChapterMessageModel:uniqueId:;
@end
