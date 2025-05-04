@interface AWERecycledWorksBottomView : UIView
@property (nonatomic) DUXButton recoverBtn;
@property (nonatomic) DUXButton deleteBtn;
@property (nonatomic) <AWERecycledWorksBottomViewDelegate> delegate;
- (id)deleteBtn;
- (void)setDeleteBtn:;
- (void)updateEnable:;
- (id)recoverBtn;
- (void)recoverBtnClick:;
- (void)deleteBtnClick:;
- (void)setRecoverBtn:;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setupUI;
@end
