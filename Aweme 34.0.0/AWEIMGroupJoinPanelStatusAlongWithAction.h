@interface AWEIMGroupJoinPanelStatusAlongWithAction : NSObject
@property (nonatomic) q status;
@property (nonatomic) @? statusChangeCompletionBlock;
@property (nonatomic) BOOL didClickJoin;
- (id)initWithStatus:completion:;
- (id)initWithStatus:didClickJoin:completion:;
- (id)statusChangeCompletionBlock;
- (void)setStatusChangeCompletionBlock:;
- (BOOL)didClickJoin;
- (void)setDidClickJoin:;
- (void)setStatus:;
- (void).cxx_destruct;
- (long long)status;
@end
