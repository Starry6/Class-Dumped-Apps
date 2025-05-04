@interface AWEDCFeedRefreshConfig : AWEDCFeedBaseConfig
@property (nonatomic) Q refreshStrategyType;
@property (nonatomic) BOOL refreshWithUnconsumedItems;
@property (nonatomic) @? isValidUnconsumedItemsBlock;
@property (nonatomic) @? triggerAnimationRefreshBlock;
@property (nonatomic) @? triggerNetworkChangeRefreshBlock;
@property (nonatomic) @? timeForOutOfTimeRefreshBlock;
- (void)setRefreshStrategyType:;
- (void)setTriggerAnimationRefreshBlock:;
- (void)setRefreshWithUnconsumedItems:;
- (unsigned long long)refreshStrategyType;
- (BOOL)refreshWithUnconsumedItems;
- (id)isValidUnconsumedItemsBlock;
- (void)setIsValidUnconsumedItemsBlock:;
- (id)triggerAnimationRefreshBlock;
- (id)triggerNetworkChangeRefreshBlock;
- (void)setTriggerNetworkChangeRefreshBlock:;
- (id)timeForOutOfTimeRefreshBlock;
- (void)setTimeForOutOfTimeRefreshBlock:;
- (void).cxx_destruct;
@end
