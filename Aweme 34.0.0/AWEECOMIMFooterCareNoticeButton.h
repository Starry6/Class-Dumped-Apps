@interface AWEECOMIMFooterCareNoticeButton : UIControl
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) NSInteger buttonStatus;
@property (nonatomic) Q type;
- (int)buttonStatus;
- (void)updateWithButtonStatus:buttonStyle:;
- (id)textLabel;
- (id)initWithFrame:;
- (id)iconView;
- (unsigned long long)type;
- (void)setIconView:;
- (void)setType:;
- (void).cxx_destruct;
- (void)setTextLabel:;
@end
