@interface AWEAwemeDetailMediumVideoController : AWEAwemeNewDetailBaseController
@property (nonatomic) q consumeVideoCount;
@property (nonatomic) BOOL hasPostNotification;
- (long long)consumeVideoCount;
- (void)setConsumeVideoCount:;
- (BOOL)hasPostNotification;
- (void)setHasPostNotification:;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
@end
