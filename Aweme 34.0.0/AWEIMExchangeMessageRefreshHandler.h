@interface AWEIMExchangeMessageRefreshHandler : AWEIMMsgBaseRefreshHandler
@property (nonatomic) Q requestInterval;
@property (nonatomic) <AWEIMMessageListComponentCenter> componentCenter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithComponentCenter:;
- (BOOL)supportRefreshMessage:;
- (BOOL)supportRefreshStrategy:;
- (void)refrshResourceStateFor:forViewModels:strategy:;
+ (BOOL)supportRefresh;
+ (long long)getRefreshHandlerType;
+ (void)fetchGroupExchangeInfoWithBatchIDSet:forceRequest:conversation:;
+ (double)requestBatchInterval;
@end
