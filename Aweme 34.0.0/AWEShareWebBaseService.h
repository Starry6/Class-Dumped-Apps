@interface AWEShareWebBaseService : AWEShareCommonImpl
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShareWebViewWithPreviousPage:;
- (id)shareWebWithModel:shareType:;
- (void)showPanelWithWebModel:configurationHandler:onViewController:;
- (void)configWebTokenWithContext:;
- (void)showPanelWithWebView:model:onViewController:;
@end
