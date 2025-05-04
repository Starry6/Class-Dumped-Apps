@interface AWELivePaywallPosterChannel : AWEShareBaseChannel
- (id)attachingDIContext;
- (id)shareImage;
- (BOOL)prepareToShare;
- (void)trackClick:jumpToPosterShare:;
- (BOOL)share;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:;
+ (void)regsiterShareChannel;
@end
