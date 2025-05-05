@interface BDWebViewWKConfigurationSetting : NSObject
@property (nonatomic) BOOL allowsInlineMediaPlayBack;
@property (nonatomic) BOOL mediaPlaybackRequiresUserAction;
@property (nonatomic) BOOL mediaPlaybackAllowsAirPlay;
@property (nonatomic) BOOL suppressesIncrementalRendering;
@property (nonatomic) BOOL forbiddenAddUserScriptByBDWebView;
@property (nonatomic) BOOL ignoresViewportScaleLimits;
- (BOOL)allowsInlineMediaPlayBack;
- (BOOL)forbiddenAddUserScriptByBDWebView;
- (void)setAllowsInlineMediaPlayBack:;
- (void)setForbiddenAddUserScriptByBDWebView:;
- (id)init;
- (void)setMediaPlaybackAllowsAirPlay:;
- (void)setMediaPlaybackRequiresUserAction:;
- (void)setSuppressesIncrementalRendering:;
- (BOOL)mediaPlaybackAllowsAirPlay;
- (BOOL)suppressesIncrementalRendering;
- (void)setIgnoresViewportScaleLimits:;
- (BOOL)ignoresViewportScaleLimits;
- (BOOL)mediaPlaybackRequiresUserAction;
- (id)copyWithZone:;
@end
