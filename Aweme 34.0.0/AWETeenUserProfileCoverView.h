@interface AWETeenUserProfileCoverView : UIView
@property (nonatomic) AWETeenProfileHeaderActionController actionController;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UIView coverMaskView;
@property (nonatomic) BOOL coverImageViewLoaded;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)setCoverMaskView:;
- (id)coverMaskView;
- (void)coverTapped;
- (void)updateBannerImageView:imageHeight:bannerHeight:scrollUp:;
- (void)configWithActionController:;
- (BOOL)isCoverImageViewLoaded;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)actionController;
- (void)setActionController:;
+ (id)coverMaskView;
+ (double)maskViewHeight;
+ (double)bannerNormalHeight;
+ (double)bannerMaxHeight;
+ (id)timingFunction;
+ (double)currentHeight;
+ (double)bannerHeight;
+ (double)currentWidth;
@end
