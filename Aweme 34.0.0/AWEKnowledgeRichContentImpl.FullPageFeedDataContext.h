@interface AWEKnowledgeRichContentImpl.FullPageFeedDataContext : AWEKnowledgeSwiftBasic.FullPageContainerContext
@property (nonatomic) NSDictionary logExtraDict;
@property (nonatomic) Q sliderPlayMode;
@property (nonatomic) Q initialPageMode;
@property (nonatomic) Q currentPageMode;
- (BOOL)isChainLogGatewayNode;
- (id)chainLogNodeParams;
- (void)setLogExtraDict:;
- (id)logExtraDict;
- (void)setInitialPageMode:;
- (void)setSliderPlayMode:;
- (unsigned long long)sliderPlayMode;
- (unsigned long long)initialPageMode;
- (void)setCurrentPageMode:;
- (unsigned long long)currentPageMode;
- (id)init;
- (void).cxx_destruct;
@end
