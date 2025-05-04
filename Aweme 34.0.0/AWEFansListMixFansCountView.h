@interface AWEFansListMixFansCountView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel countLabel;
- (id)createCountStringWithNum:;
- (id)number:unit:;
- (void)bindTittle:count:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (id)countLabel;
- (void)setCountLabel:;
@end
