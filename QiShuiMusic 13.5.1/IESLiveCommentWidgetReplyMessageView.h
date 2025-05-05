@interface IESLiveCommentWidgetReplyMessageView : UIView
@property (nonatomic) IESLiveCommentWidgetReplyTipFactory replyTipFactory;
@property (nonatomic) IESLiveCommentPanelReplyTipModel replyTipModel;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UILabel replyMessageLabel;
@property (nonatomic) <IESLiveCommentWidgetReplyViewOperationDelegate> delegate;
- (id)replyTipFactory;
- (id)replyMessageLabel;
- (id)replyTipModel;
- (void)selfTapped;
- (void)setReplyMessageLabel:;
- (void)setReplyTipFactory:;
- (void)setReplyTipModel:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWith:;
- (void)setupView;
- (id)closeButton;
- (void)setCloseButton:;
- (void)closeButtonTapped;
@end
