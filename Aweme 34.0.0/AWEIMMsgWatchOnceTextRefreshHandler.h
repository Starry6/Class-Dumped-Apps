@interface AWEIMMsgWatchOnceTextRefreshHandler : AWEIMMsgBaseRefreshHandler
@property (nonatomic) Q requestInterval;
@property (nonatomic) <AWEIMMessageListComponentCenter> componentCenter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)supportRefreshMessage:;
- (BOOL)supportRefreshStrategy:;
- (void)refrshResourceStateFor:forViewModels:strategy:;
- (unsigned long long)requestInterval;
+ (BOOL)supportRefresh;
+ (long long)getRefreshHandlerType;
+ (void)markMessageWatchOnceAlreadyConsumeWith:withConShortId:;
@end
