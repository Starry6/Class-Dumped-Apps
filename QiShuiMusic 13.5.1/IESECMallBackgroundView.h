@interface IESECMallBackgroundView : UIView
@property (nonatomic) UIImageView bgImageView;
@property (nonatomic) NSString currentBackgroundUrl;
@property (nonatomic) IESECListKitBackgroundModel background;
@property (nonatomic) Q currentThemeStyle;
@property (nonatomic) NSString defaultBgUrl;
@property (nonatomic) UIColor defaultColor;
@property (nonatomic) double topBarBottom;
@property (nonatomic) UIImage currentBgImage;
- (void)buildUI;
- (id)currentBackgroundUrl;
- (id)currentBgImage;
- (unsigned long long)currentThemeStyle;
- (id)defaultBgUrl;
- (id)defaultDarkBgUrl;
- (void)listenListCollectionScrollOffsetY:;
- (void)setCurrentBackgroundUrl:;
- (void)setCurrentBgImage:;
- (void)setCurrentThemeStyle:;
- (void)setDefaultBgUrl:;
- (void)setGrayIfNeed:;
- (void)setTopBarBottom:;
- (double)topBarBottom;
- (id)background;
- (void)dealloc;
- (void)setBackground:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)updateData;
- (id)defaultColor;
- (void)setDefaultColor:;
- (void)setBgImageView:;
- (id)bgImageView;
- (void)buildConstraints;
@end
