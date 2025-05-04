@interface AWEFeedReplaceVideosStrategyManager : NSObject
@property (nonatomic) NSMutableArray instanceList;
- (void)buildStrategyInstance;
- (id)instanceList;
- (void)setInstanceList:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
