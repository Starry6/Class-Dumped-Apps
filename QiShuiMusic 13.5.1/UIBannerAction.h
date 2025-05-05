@interface UIBannerAction : BSAction
@property (nonatomic) _UIBannerContent bannerContent;
@property (nonatomic) BOOL tappable;
- (long long)UIActionType;
- (id)keyDescriptionForSetting:;
- (id)initWithBannerContent:;
- (id)initWithBannerContent:responseHandler:;
- (id)_initWithBannerContent:responseHandler:;
- (id)bannerContent;
- (BOOL)tappable;
- (BOOL)bannerTapped;
@end
