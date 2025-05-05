@interface IESLiveTableViewSectionAdapterProxy : NSProxy
@property (nonatomic) <UITableViewDelegate> delegate;
@property (nonatomic) <UITableViewDataSource> dataSource;
@property (nonatomic) @ target;
- (void)setDataSource:;
- (BOOL)respondsToSelector:;
- (id)initWithTarget:;
- (void)setDelegate:;
- (id)methodSignatureForSelector:;
- (void)setTarget:;
- (id)dataSource;
- (id)delegate;
- (void).cxx_destruct;
- (id)target;
- (id)forwardingTargetForSelector:;
- (void)forwardInvocation:;
@end
