@interface AWEIMOfficialContentTextView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel detailLabel;
@property (nonatomic) AWENoticeTextStructModel textModel;
- (id)textModel;
- (void)setTextModel:;
- (void)setTextModel:maxTitleWidth:;
- (id)init;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)detailLabel;
- (void)setDetailLabel:;
@end
