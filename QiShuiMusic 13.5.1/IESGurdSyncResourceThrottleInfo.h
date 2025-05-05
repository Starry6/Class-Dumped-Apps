@interface IESGurdSyncResourceThrottleInfo : NSObject
@property (nonatomic) NSDate lastFinishedDate;
@property (nonatomic) NSMutableArray completions;
- (id)lastFinishedDate;
- (void)setLastFinishedDate:;
- (id)init;
- (void)setCompletions:;
- (id)completions;
- (void).cxx_destruct;
@end
