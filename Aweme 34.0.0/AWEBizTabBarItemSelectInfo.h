@interface AWEBizTabBarItemSelectInfo : NSObject
@property (nonatomic) NSString trackEvent;
@property (nonatomic) BOOL disableLightMode;
@property (nonatomic) BOOL showSeparatorLine;
@property (nonatomic) BOOL shouldTabBarBackgroundColorFill;
@property (nonatomic) BOOL tabBarBackgroundColorFillAnimated;
- (id)trackEvent;
- (void)setShowSeparatorLine:;
- (void)setShouldTabBarBackgroundColorFill:;
- (void)setDisableLightMode:;
- (BOOL)disableLightMode;
- (BOOL)showSeparatorLine;
- (BOOL)shouldTabBarBackgroundColorFill;
- (BOOL)tabBarBackgroundColorFillAnimated;
- (void)setTrackEvent:;
- (void)setTabBarBackgroundColorFillAnimated:;
- (void).cxx_destruct;
@end
