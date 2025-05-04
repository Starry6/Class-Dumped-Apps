@interface AWEXiGuaFeedEntryView : UIView
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSString referString;
- (id)referString;
- (void)setReferString:;
- (void)configureUI;
- (void)setModel:;
- (id)initWithFrame:;
- (id)model;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setIconImageView:;
- (id)contentLabel;
- (void)setContentLabel:;
- (void)viewTapped;
@end
