@interface AWEWebEmptyView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel detailLabel;
@property (nonatomic) UILabel urlLabel;
@property (nonatomic) UILabel bottomLabel;
@property (nonatomic) NSString urlString;
- (id)urlLabel;
- (id)URLTextColor;
- (void)setupURL:;
- (void)setUrlLabel:;
- (id)urlString;
- (id)iconImage;
- (void)setUrlString:;
- (id)init;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setIconImageView:;
- (void)setupUI;
- (id)detailLabel;
- (void)setDetailLabel:;
- (id)detailTextColor;
- (void)setBottomLabel:;
- (id)bottomLabel;
@end
