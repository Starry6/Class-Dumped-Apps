@interface AWEGeneralWaterfallAdConvertView : UIView
@property (nonatomic) BOOL isDarkStyle;
@property (nonatomic) UIView seperatorLineView;
@property (nonatomic) AWEGeneralWaterfallAdLabel adTagLabel;
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) NSString tipText;
@property (nonatomic) AWETagLabelModel adLabelModel;
- (id)tipText;
- (void)setTipText:;
- (id)adTagLabel;
- (void)setAdLabelModel:;
- (id)adLabelModel;
- (BOOL)isDarkStyle;
- (void)setIsDarkStyle:;
- (id)seperatorLineView;
- (void)setSeperatorLineView:;
- (void)setAdTagLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setTipLabel:;
- (id)tipLabel;
- (void)setupUI;
@end
