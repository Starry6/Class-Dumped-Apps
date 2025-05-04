@interface AWERLViewReusePool : NSObject
@property (nonatomic) NSMutableArray pool;
@property (nonatomic) q position;
@property (nonatomic) q resetTicket;
- (long long)resetTicket;
- (void)setResetTicket:;
- (id)viewForProps:containerView:;
- (void)resetWithAnimator:;
- (id)init;
- (long long)position;
- (void)setPool:;
- (id)pool;
- (void).cxx_destruct;
- (void)setPosition:;
@end
