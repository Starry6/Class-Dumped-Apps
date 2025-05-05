@interface WFOnScreenContentExtractor : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} applicationFrame;
@property (nonatomic) q applicationLevel;
- (id)responseWithError:;
- (void)handleAction:completionHandler:;
- (id)applicationFrame;
- (long long)applicationLevel;
- (id)applicationFrameForScene:;
- (void)loadActivityItemsConfigurationItemsForScene:serviceOptions:completionHandler:;
- (id)activityItemsConfigurationFromScene:;
- (id)nodeWithItem:file:;
- (void)setApplicationFrame:;
- (void)setApplicationLevel:;
@end
