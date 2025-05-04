@interface AWEDislikeStrategyTrackerManager : NSObject
@property (nonatomic) NSMutableArray trackers;
- (id)commonParamsWithDislikeContext:;
- (void)setupTrackers;
- (id)trackClassNames;
- (void)reportDislikeDuplicateForKey:tracker:trackerAndParamsMap:;
- (id)init;
- (void).cxx_destruct;
- (void)setTrackers:;
- (id)trackers;
@end
