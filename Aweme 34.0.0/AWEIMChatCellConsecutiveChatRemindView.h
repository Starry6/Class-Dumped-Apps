@interface AWEIMChatCellConsecutiveChatRemindView : UIView
@property (nonatomic) UIButton remindBtn;
@property (nonatomic) <AWEIMChatCellConsecutiveChatRemindViewDelegate> delegate;
- (void)p_setupView;
- (void)p_clickConsecutiveChatRemindBtn;
- (void)setRemindBtn:;
- (id)remindBtn;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
