@interface AWESearchSugTableBannerCell : UITableViewCell
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterFromSecond;
@property (nonatomic) UIView<BDXViewContainerProtocol> bdxLynxView;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)enterFromSecond;
- (void)setEnterFromSecond:;
- (id)bdxLynxView;
- (void)setBdxLynxView:;
- (void)configureCouponBanner;
- (void)bindUrlWithProps;
- (double)heightWithLynxView;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
+ (id)identifier;
@end
