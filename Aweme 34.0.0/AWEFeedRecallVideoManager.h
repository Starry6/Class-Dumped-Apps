@interface AWEFeedRecallVideoManager : NSObject
@property (nonatomic) NSMutableArray recalledModelItemIDArray;
- (void)setRecalledModelItemIDArray:;
- (id)recalledModelItemIDArray;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
