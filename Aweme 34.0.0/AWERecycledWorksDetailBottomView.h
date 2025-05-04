@interface AWERecycledWorksDetailBottomView : UIView
@property (nonatomic) UIButton deleteButton;
@property (nonatomic) UIButton recoverButton;
@property (nonatomic) <AWERecycledWorksBottomViewDelegate> delegate;
- (void)didClickRecoverButton;
- (void)didClickDeleteButton;
- (id)recoverButton;
- (void)setRecoverButton:;
- (id)init;
- (void)setDeleteButton:;
- (id)delegate;
- (id)deleteButton;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
