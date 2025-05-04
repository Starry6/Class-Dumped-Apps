@interface AWEPublishSuccessView : UIView
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) Q type;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) @? bindButtonClicked;
@property (nonatomic) BOOL showSendIMLabel;
@property (nonatomic) NSString title;
- (void)p_setupUI;
- (id)syncLabel;
- (id)syncIconView;
- (id)initWithAweme:type:showSendIMLabel:;
- (void)setBindButtonClicked:;
- (BOOL)showSendIMLabel;
- (void)p_bindButtonClicked;
- (id)bindButtonClicked;
- (id)createSubtitleLabel;
- (unsigned long long)type;
- (id)model;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)title;
- (id)titleLabel;
- (void)setTitle:;
@end
