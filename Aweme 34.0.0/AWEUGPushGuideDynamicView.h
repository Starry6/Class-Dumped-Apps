@interface AWEUGPushGuideDynamicView : AWEUGPushGuideBaseView
@property (nonatomic) NSMutableDictionary allViews;
@property (nonatomic) NSMutableDictionary allModel;
@property (nonatomic) UIView panel;
- (void)configWithModel:;
- (void)click:;
- (void)configViews;
- (id)initWithGuideViewModel:;
- (void)realShow;
- (void)setAllModel:;
- (id)allModel;
- (void)renderHTMLString:label:;
- (id)renderSelectionWithModel:;
- (id)renderButtonWithModel:;
- (id)renderBackgroundLayerWithModel:;
- (void)addCornerView:leftTop:rightTop:leftBottom:rightBottom:color:;
- (void)selectionClick:;
- (id)allViews;
- (void).cxx_destruct;
- (void)setAllViews:;
- (id)panel;
- (void)setPanel:;
@end
