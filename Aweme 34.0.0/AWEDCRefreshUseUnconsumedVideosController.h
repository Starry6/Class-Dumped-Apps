@interface AWEDCRefreshUseUnconsumedVideosController : AWEDCFeedBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)unconsumedVideos;
- (long long)getMaxReachedIndexWithIndexPath:;
@end
