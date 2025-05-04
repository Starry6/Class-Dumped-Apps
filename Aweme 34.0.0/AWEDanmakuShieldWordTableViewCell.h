@interface AWEDanmakuShieldWordTableViewCell : UITableViewCell
@property (nonatomic) UIView bottomLine;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) Q cornerType;
@property (nonatomic) Q scene;
@property (nonatomic) NSString title;
@property (nonatomic) @? deleteShieldWordButtonClick;
- (void)addCornerIfNeed;
- (id)deleteShieldWordButtonClick;
- (void)handleCloseButtonClick;
- (void)setDeleteShieldWordButtonClick:;
- (void)setScene:;
- (unsigned long long)scene;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)title;
- (id)titleLabel;
- (void)setTitle:;
- (void)setCloseButton:;
- (id)closeButton;
- (id)bottomLine;
- (void)setBottomLine:;
- (unsigned long long)cornerType;
- (void)setCornerType:;
- (void)setUpUI;
@end
