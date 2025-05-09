@interface AWEFeedNearbyShopCardUIConfig : NSObject
@property (nonatomic) BOOL isEnhancedContennt;
@property (nonatomic) UIColor shopCardDetailBGColor;
@property (nonatomic) UIColor shopCardDetailLabelColor;
@property (nonatomic) UIImage arrowIconImg;
@property (nonatomic) UIImage locationIcon;
@property (nonatomic) NSString locationIconBGCDNPath;
@property (nonatomic) NSString locationIconBGCDNName;
@property (nonatomic) UIImage contentBGImg;
@property (nonatomic) NSString contentBGCDNPath;
@property (nonatomic) NSString contentBGCDNName;
@property (nonatomic) UIImage shopIconImg;
@property (nonatomic) UIImage shopTextImg;
@property (nonatomic) NSArray gradientBGColors;
- (id)gradientBGColors;
- (id)locationIcon;
- (id)contentBGImg;
- (id)contentBGCDNPath;
- (id)contentBGCDNName;
- (void)setLocationIcon:;
- (void)setContentBGImg:;
- (void)setContentBGCDNPath:;
- (void)setContentBGCDNName:;
- (void)setGradientBGColors:;
- (BOOL)isEnhancedContennt;
- (id)shopCardDetailBGColor;
- (id)shopCardDetailLabelColor;
- (id)arrowIconImg;
- (id)shopIconImg;
- (id)shopTextImg;
- (void)setIsEnhancedContennt:;
- (void)setShopCardDetailBGColor:;
- (void)setShopCardDetailLabelColor:;
- (void)setArrowIconImg:;
- (id)locationIconBGCDNPath;
- (void)setLocationIconBGCDNPath:;
- (id)locationIconBGCDNName;
- (void)setLocationIconBGCDNName:;
- (void)setShopIconImg:;
- (void)setShopTextImg:;
- (id)initWithModel:;
- (void).cxx_destruct;
@end
