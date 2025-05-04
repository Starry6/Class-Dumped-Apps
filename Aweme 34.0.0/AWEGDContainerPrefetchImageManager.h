@interface AWEGDContainerPrefetchImageManager : NSObject
- (void)prefetchImageWithData:ruleArray:;
- (void)parseNodesDataWithNodesData:rule:;
- (id)valueForJSONKeyPathWithKeyPath:json:;
- (void)preloadImageWithImgPath:;
- (void)triggerPrefetchImageWithParams:headers:cache:;
+ (id)sharedInstance;
@end
