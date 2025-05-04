@interface AWENativeAppDebugCenterTableViewCell : UITableViewCell
@property (nonatomic) UIButton scanButton;
@property (nonatomic) UILabel hintLabel;
@property (nonatomic) UIImageView selectImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) <AWEAboutEaterEggTableViewProtocol> delegate;
- (void)setSelectImageView:;
- (id)selectImageView;
- (id)scanButton;
- (void)updateEasterEggModel:;
- (void)setScanButton:;
- (id)delegate;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setDelegate:;
- (void)setupUI;
- (id)hintLabel;
- (void)setHintLabel:;
@end
