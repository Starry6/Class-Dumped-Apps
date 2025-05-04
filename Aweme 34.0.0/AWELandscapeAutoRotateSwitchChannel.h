@interface AWELandscapeAutoRotateSwitchChannel : AWEShareBaseChannel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)shareImage;
- (void)didSelectShareItem:;
- (id)makeItemWithStyle:inView:;
- (id)setupContainerView;
- (BOOL)share;
- (id)shareType;
- (id)shareTitle;
@end
