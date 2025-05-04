@interface AWEEcomSearchCouponTagViewUIConfig : NSObject
@property (nonatomic) {CGSize=dd} iconSize;
@property (nonatomic) double textFont;
@property (nonatomic) NSString textHexColorString;
@property (nonatomic) NSString labelBgHexColorString;
@property (nonatomic) NSArray gradientColors;
@property (nonatomic) double showStyle;
@property (nonatomic) double spaceBetweenIconAndText;
- (double)showStyle;
- (void)setShowStyle:;
- (void)setTextHexColorString:;
- (void)setLabelBgHexColorString:;
- (double)spaceBetweenIconAndText;
- (id)textHexColorString;
- (id)labelBgHexColorString;
- (void)setSpaceBetweenIconAndText:;
- (id)init;
- (double)textFont;
- (void)setIconSize:;
- (id)gradientColors;
- (id)iconSize;
- (void).cxx_destruct;
- (void)setGradientColors:;
- (void)setTextFont:;
@end
