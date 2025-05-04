@interface AWEAwemePaymentVideoContinueController : AWEAwemeNewDetailBaseController
- (void)willConfigCell:model:;
- (void)configCell:model:;
- (void)seekTimeIfNeed:model:;
- (BOOL)shouldChangeLifeCycle;
@end
