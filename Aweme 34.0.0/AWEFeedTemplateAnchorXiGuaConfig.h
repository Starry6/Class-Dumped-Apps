@interface AWEFeedTemplateAnchorXiGuaConfig : AWEFeedTemplateAnchorBaseConfig
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handlerTemplateAnchorViewClicked;
- (id)trackerCommonParamsForTemplateAnchor;
- (void)bdxPushViewController:animated:;
- (void)bdxPresentViewController:animated:completion:;
- (void)popup:willChangeFrame:toFrame:withDuration:;
- (void)popup:didDragTo:;
- (void)popupDidCloseWithContainer:params:;
- (id)addAdEventParamsWith:;
- (id)addShrinkStyleParamsWith:;
- (id)xiguaSubPageTypeString;
@end
