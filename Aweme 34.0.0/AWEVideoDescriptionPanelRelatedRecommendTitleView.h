@interface AWEVideoDescriptionPanelRelatedRecommendTitleView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) NSString referString;
- (id)referString;
- (void)setReferString:;
- (void)updateWithWidth:referString:;
- (double)getTitleSectionHeight;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
@end
