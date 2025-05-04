@interface AWENearbyTaskFeedPartialRefresh : AWENearbyBaseTask
@property (nonatomic) @? block;
@property (nonatomic) AWENearbyTaskFeedPartialRefreshModel refreshModel;
- (id)refreshModel;
- (void)setRefreshModel:;
- (id)initWithRefreshModel:executor:;
- (BOOL)mergeAndUpdateDataList:updateInfo:;
- (void)updateLynxCardDataWithAweme:data:;
- (void)updateAweme:data:;
- (void)executeWithContext:;
- (id)block;
- (void)setBlock:;
- (void).cxx_destruct;
- (id)triggerType;
+ (void)_aweLazyRegisterStaticLoad;
@end
