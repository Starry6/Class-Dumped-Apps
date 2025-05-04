@interface AWENearbyLynxPreloadFeedHandler : NSObject
@property (nonatomic) AWENearbyEmptyCardPreloadConfig emptyCardConfig;
@property (nonatomic) NSMutableDictionary lynxContainerCache;
@property (nonatomic) NSMutableArray emptyCardContainerCache;
@property (nonatomic) NSMutableArray preloadedContainers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)emptyCardConfig;
- (id)lynxContainerForUrl:useScene:;
- (void)preloadLynxContainerWithModel:;
- (void)preloadEmptyCardWithConfig:;
- (id)initWithEmptyCardConfig:;
- (void)setEmptyCardConfig:;
- (void)lynxContainer:didFinishLoadWithURL:;
- (id)lynxContainerCache;
- (id)preloadedContainers;
- (void)trackResultWithCode:url:preloadModel:useScene:;
- (id)emptyCardContainerCache;
- (void)setLynxContainerCache:;
- (void)setEmptyCardContainerCache:;
- (void)setPreloadedContainers:;
- (void).cxx_destruct;
@end
