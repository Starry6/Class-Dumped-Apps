@interface AWEIMShareH5ContentComponent : AWEIMFlexComponent
@property (nonatomic) BOOL isDSInstalled;
@property (nonatomic) q scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (void)p_trackH5ShareFromFeedAnchorIfNeeded:;
- (void)trackH5ShareEventForName:;
- (void)trackEcomH5MsgClick;
- (void)p_trackH5ShareEventForName:;
- (void)p_createPresenter;
- (void)p_didTapCard;
- (void)trackWillDisplayCell;
- (BOOL)isDSInstalled;
- (void)setIsDSInstalled:;
- (id)shareH5Message;
- (void)trackSendGiftCardClick;
- (void)refreshInstalledStatus;
- (id)displayMessage;
- (void)setScene:;
- (long long)scene;
+ (BOOL)isDSInstalled;
+ (void)p_configProps:withMessage:;
@end
