@interface AWEIMRecallNoticeMessageTableViewCell : AWEIMSystemMessageTableViewCell
@property (nonatomic) YYLabel noticeYYLabel;
- (void)configWithMessage:;
- (id)noticeYYLabel;
- (void)setNoticeYYLabel:;
- (void)layoutSubviews;
- (void)refreshUI;
- (void).cxx_destruct;
- (void)setupUI;
+ (id)getNoticeTextBaseAttributedDict;
+ (id)addReEditAttributedTextForAttributedString:actionBlock:;
+ (id)contentSizeWithMesasge:;
+ (id)recallAttributedTextForMessage:actionBlock:;
+ (id)recallTextForMessage:;
+ (id)identifier;
@end
