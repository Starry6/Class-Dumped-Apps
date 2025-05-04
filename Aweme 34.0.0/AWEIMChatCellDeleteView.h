@interface AWEIMChatCellDeleteView : UIView
@property (nonatomic) UIButton deleteBtn;
@property (nonatomic) <AWEIMChatCellDeleteDelegate> delegate;
- (void)p_setupView;
- (id)deleteBtn;
- (void)setDeleteBtn:;
- (void)didClickDeleteIcon;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
