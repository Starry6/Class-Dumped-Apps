@interface AWEIMNoticeMessageTableViewCell : AWEIMSystemMessageTableViewCell
@property (nonatomic) CAShapeLayer noticeLayer;
@property (nonatomic) YYLabel noticeLabel;
- (void)setNoticeLayer:;
- (void)__didClickIndex:;
- (void)configWithMessage:;
- (id)noticeLayer;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setupUI;
- (id)noticeLabel;
- (void)setNoticeLabel:;
+ (id)contentSizeWithMesasge:;
+ (id)identifier;
@end
