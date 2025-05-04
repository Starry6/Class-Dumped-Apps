@interface AWEShowPlayletCommentHeaderView : UIView
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) UILabel preTitleLabel;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) NSDictionary params;
@property (nonatomic) @? clickBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setClickBlock:;
- (id)clickBlock;
- (id)preTitleLabel;
- (void)setPreTitleLabel:;
- (void)p_didClick;
- (id)commonTrackerParams;
- (id)initWithAwemeModel:params:;
- (void)setModel:;
- (id)labelFont;
- (id)model;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)params;
- (void)setParams:;
- (void)setUpUI;
@end
