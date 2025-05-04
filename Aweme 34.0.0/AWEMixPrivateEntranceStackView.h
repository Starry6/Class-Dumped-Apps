@interface AWEMixPrivateEntranceStackView : UIView
@property (nonatomic) UIView lockView;
@property (nonatomic) NSMutableArray photoViews;
- (void)onThemeChange;
- (void)configWithImageURLArrays:privateCount:;
- (id)generatePhotoImageView;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)lockView;
- (void)setLockView:;
- (id)photoViews;
- (void)setPhotoViews:;
+ (id)defaultImageArrayWithCount:;
+ (id)handleImageArrayIfNeed:privateCount:;
+ (id)expectedSizeWithImageURLArrays:privateCount:;
@end
