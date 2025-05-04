@interface AWEPostPageTableView : UITableView
@property (nonatomic) {CGPoint=dd} lockedContentOffset;
@property (nonatomic) BOOL animateLock;
- (void)setLockedContentOffset:;
- (id)lockedContentOffset;
- (BOOL)animateLock;
- (void)setAnimateLock:;
- (void)setContentOffset:;
- (void)setContentOffset:animated:;
@end
