@interface AWEUserLoginThemeHeaderView : UIView
@property (nonatomic) UIImageView halfScreenThemeHeadView;
@property (nonatomic) NSString headUrl;
@property (nonatomic) NSString themeId;
@property (nonatomic) BOOL isPadOpaque;
- (id)themeId;
- (void)setThemeId:;
- (id)headUrl;
- (void)setHeadUrl:;
- (void)p_monitorLoadImage:duration:imageURL:imageType:activityId:error:;
- (id)initWithHeadUrl:themeId:isPadOpaque:;
- (void)setupHalfScreenThemeHeadView;
- (id)halfScreenThemeHeadView;
- (BOOL)isPadOpaque;
- (void)setHalfScreenThemeHeadView:;
- (void)setIsPadOpaque:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
@end
