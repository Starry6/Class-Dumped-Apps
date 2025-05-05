@interface AWEIMPushNoticeMessageTableViewCell : AWEIMSystemMessageTableViewCell
@property (nonatomic) UILabel noticeLabel;
@property (nonatomic) UIButton openBtn;
- (id)openBtn;
- (void)openBtnClick:;
- (void)setOpenBtn:;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setupUI;
- (id)noticeLabel;
- (void)setNoticeLabel:;
+ (id)contentSizeWithMesasge:;
+ (id)identifier;
@end
