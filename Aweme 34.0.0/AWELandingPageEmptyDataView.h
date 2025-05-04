@interface AWELandingPageEmptyDataView : UIView
@property (nonatomic) UIImageView emptyImageView;
@property (nonatomic) UILabel mainLabel;
@property (nonatomic) UILabel subLabel;
- (id)emptyImageView;
- (void)setEmptyImageView:;
- (id)initWithImageName:title:desc:placeHolder:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)mainLabel;
- (void)setMainLabel:;
- (void)setSubLabel:;
- (id)subLabel;
@end
