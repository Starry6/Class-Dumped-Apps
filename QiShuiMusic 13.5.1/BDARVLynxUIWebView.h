@interface BDARVLynxUIWebView : LynxUI
@property (nonatomic) WKWebViewLynxGestureRecognizerDelegate wkWebviewDelegate;
@property (nonatomic) BDARVPayloadData payloadData;
@property (nonatomic) @ oldDelegate;
@property (nonatomic) UITapGestureRecognizer tap;
@property (nonatomic) q position;
@property (nonatomic) NSString preload;
@property (nonatomic) NSString interceptEvent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setInterceptEvent:requestReset:;
- (void)setOldDelegate:;
- (void)canGoBack:withResult:;
- (void)embedViewDidScroll:;
- (void)goBack:withResult:;
- (void)handelTap:;
- (id)interceptEvent;
- (id)oldDelegate;
- (void)propsDidUpdate;
- (void)reload:withResult:;
- (void)sendEvent:withResult:;
- (void)setInterceptEvent:;
- (void)setInterceptGesture:requestReset:;
- (void)setIsVisibleToUser:requestReset:;
- (void)setPosition:requestReset:;
- (void)setPreload:requestReset:;
- (void)setWkWebviewDelegate:;
- (id)wkWebviewDelegate;
- (void)setPosition:;
- (long long)position;
- (id)init;
- (id)preload;
- (void)dealloc;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)setPayloadData:;
- (void).cxx_destruct;
- (id)payloadData;
- (id)tap;
- (void)setTap:;
- (id)createView;
- (void)setPreload:;
+ (id)__lynx_prop_config__1660;
+ (id)__lynx_prop_config__1721;
+ (id)__lynx_prop_config__3522;
+ (id)__lynx_prop_config__3613;
+ (id)__lynx_prop_config__3936;
+ (id)__lynx_ui_method_config__3684;
+ (id)__lynx_ui_method_config__3795;
+ (id)__lynx_ui_method_config__4067;
+ (id)__lynx_ui_method_config__4188;
@end
