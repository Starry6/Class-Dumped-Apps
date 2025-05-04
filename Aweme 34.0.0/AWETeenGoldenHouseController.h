@interface AWETeenGoldenHouseController : AWEGoldenHouseBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)insertNextCachedFeedWith:;
- (void)insertCachedFeedWith:;
- (BOOL)checkCurrentFeedValid;
- (void)play;
@end
