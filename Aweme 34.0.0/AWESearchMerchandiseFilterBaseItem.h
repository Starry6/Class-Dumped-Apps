@interface AWESearchMerchandiseFilterBaseItem : UIView
@property (nonatomic) UIImageView icon;
@property (nonatomic) UILabel mainTitleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) BOOL isTwoLine;
@property (nonatomic) BOOL highLight;
@property (nonatomic) AWEDoubleColumnSearchMerchandiseFilterStyleModel styleModel;
- (void)setStyleModel:;
- (id)styleModel;
- (BOOL)isTwoLine;
- (BOOL)highLight;
- (id)mainTitleLabel;
- (void)setMainTitleLabel:;
- (void)setHighLight:;
- (void)setMainText:subText:icon:;
- (void)setIsTwoLine:;
- (id)icon;
- (id)initWithFrame:;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
- (void)updateFont;
@end
