@interface AWEUserLoginSubTitleView : UIView
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) NSString subTitle;
@property (nonatomic) AWEUserComponentSubtitleModel model;
- (id)initWithSubTitle:;
- (void)setupUIWithModel;
- (void)setModel:;
- (id)initWithModel:;
- (void)setSubTitle:;
- (id)subTitle;
- (id)model;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
@end
