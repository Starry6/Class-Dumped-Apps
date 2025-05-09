@interface AWELiveAudienceVCConfig : NSObject
@property (nonatomic) BOOL needHideRightBottomBanner;
@property (nonatomic) BOOL showLandscape;
@property (nonatomic) BOOL showShopCard;
@property (nonatomic) BOOL disablePopout;
@property (nonatomic) BOOL disableReplaceVC;
@property (nonatomic) BOOL needRecreatePlayer;
@property (nonatomic) <AWELiveAudienceControllerDelegate> audienceDelegate;
@property (nonatomic) {UIEdgeInsets=dddd} screenInsets;
@property (nonatomic) HTSEventContext context;
@property (nonatomic) <IESLivePlayerProtocol> player;
- (id)screenInsets;
- (void)setScreenInsets:;
- (void)setShowLandscape:;
- (void)setAudienceDelegate:;
- (void)setDisableReplaceVC:;
- (void)setNeedHideRightBottomBanner:;
- (BOOL)showLandscape;
- (void)setShowShopCard:;
- (BOOL)needRecreatePlayer;
- (void)setNeedRecreatePlayer:;
- (void)setDisablePopout:;
- (BOOL)needHideRightBottomBanner;
- (BOOL)showShopCard;
- (BOOL)disablePopout;
- (BOOL)disableReplaceVC;
- (id)audienceDelegate;
- (id)player;
- (void)setPlayer:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
