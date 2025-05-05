@interface IESLiveCommentWidgetOperationView : UIView
@property (nonatomic) UIButton deleteButton;
@property (nonatomic) UIButton sendButton;
@property (nonatomic) @? didClickDelete;
@property (nonatomic) @? didClickSend;
- (void)clickDelete:;
- (void)clickSend:;
- (id)didClickDelete;
- (id)didClickSend;
- (void)makeDeleteBtnDisable:;
- (void)makeDeleteBtnVisible:;
- (void)makeSendBtnDisable:;
- (void)setDidClickDelete:;
- (void)setDidClickSend:;
- (id)intrinsicContentSize;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)deleteButton;
- (void)setDeleteButton:;
- (void)setupViews;
- (id)sendButton;
- (void)setSendButton:;
@end
