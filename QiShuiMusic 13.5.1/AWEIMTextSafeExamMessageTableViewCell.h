@interface AWEIMTextSafeExamMessageTableViewCell : AWEIMTextMessageTableViewCell
@property (nonatomic) UIButton safeExamEntryButton;
@property (nonatomic) UIView entryLine;
- (void)configWithMessage:;
- (id)entryLine;
- (void)hideMessageContentViewTap;
- (id)safeExamEntryButton;
- (void)setEntryLine:;
- (void)setSafeExamEntryButton:;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)menuItems;
+ (id)contentSizeWithMesasge:;
+ (BOOL)shouldShowQuoteReplyMessageWithMessage:;
+ (id)identifier;
@end
