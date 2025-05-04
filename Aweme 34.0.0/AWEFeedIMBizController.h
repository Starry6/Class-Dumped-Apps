@interface AWEFeedIMBizController : AWEBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)willRefresh;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
@end
