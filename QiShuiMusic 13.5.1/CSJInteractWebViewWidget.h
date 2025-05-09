@interface CSJInteractWebViewWidget : NSObject
@property (nonatomic) CSJWKWebViewClient webView;
@property (nonatomic) UIView parentView;
@property (nonatomic) CSJInteractionWebViewJSBridgeHandler jsbHandler;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} changedFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} realInteractionArea;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} widgetInteractionArea;
@property (nonatomic) CSJInteractionWebViewParamModel paramModel;
@property (nonatomic) NSString url;
@property (nonatomic) NSString clickPointId;
@property (nonatomic) BOOL hasShow;
@property (nonatomic) double exceedAreaRate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldReceiveHitTest:withEvent:;
- (BOOL)hasShow;
- (id)changedFrame;
- (id)clickPointId;
- (void)closeWebView;
- (double)exceedAreaRate;
- (id)initWithFrame:paramModel:;
- (id)jsbHandler;
- (BOOL)p_checkInteractionOverlapRate;
- (void)p_getWidgetAreaInfo:;
- (void)p_loadUrl;
- (double)p_overlapRateWithRectA:rectB:;
- (void)p_reportClickTarckWithConvert:point:;
- (void)p_reportShowTrackWithSuccess:;
- (void)p_setupJSBHandler;
- (void)p_setupWebViewWithFrame:;
- (id)paramModel;
- (id)realInteractionArea;
- (void)setChangedFrame:;
- (void)setClickPointId:;
- (void)setExceedAreaRate:;
- (void)setHasShow:;
- (void)setJsbHandler:;
- (void)setParamModel:;
- (void)setRealInteractionArea:;
- (void)setWidgetInteractionArea:;
- (id)widgetInteractionArea;
- (void)setWebView:;
- (id)url;
- (id)webView;
- (void)setUrl:;
- (void).cxx_destruct;
- (void)showInView:;
- (id)parentView;
- (void)setParentView:;
@end
