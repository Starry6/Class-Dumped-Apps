@interface AWENearbyGrouponCitySelectView : UIView
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIImageView rightIcon;
@property (nonatomic) q pageType;
@property (nonatomic) q style;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRightIcon:;
- (id)initWithText:pageType:style:;
- (double)widthThatFits;
- (void)updateSelectViewColor:;
- (void)setupUIWithText:;
- (double)largeModeSizeWithFont:;
- (double)getMaxLabelWidth;
- (id)textLabel;
- (void)setPageType:;
- (long long)style;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (long long)pageType;
- (void)setStyle:;
- (void)setTextLabel:;
- (void)updateText:;
- (id)rightIcon;
@end
