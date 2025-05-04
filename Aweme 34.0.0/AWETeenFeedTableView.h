@interface AWETeenFeedTableView : UITableView
@property (nonatomic) BOOL hasAnyAction;
- (BOOL)hasAnyAction;
- (void)setHasAnyAction:;
- (id)hitTest:withEvent:;
@end
