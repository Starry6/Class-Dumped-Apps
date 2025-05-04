@interface AWERecycledWorksDetailViewController : AWEAwemeNewDetailBaseController
@property (nonatomic) DUXToast actionToast;
- (void)updateBottomBarWithAweme:updateTiming:;
- (void)showToastWithText:;
- (id)actionToast;
- (id)createRecycledWorksDetailBottomBarContextBlock;
- (void)deleteCurrentRecycledWork;
- (void)trackEventName:aweme:;
- (void)recoverCurrentRecycledWork;
- (void)setActionToast:;
- (void).cxx_destruct;
@end
