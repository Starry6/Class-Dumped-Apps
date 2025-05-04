@interface AWEShareAnnieXService : AWEShareCommonImpl
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showPanelWithAnnieXContainer:context:;
+ (void)trackWithShareWithContainer:context:task:;
+ (void)prepareContextWithContainer:context:completion:;
+ (id)shareChannels;
+ (void)onChannelButtonClickWithShareType:webModel:container:context:;
+ (void)parseTitleInWebView:completion:;
@end
