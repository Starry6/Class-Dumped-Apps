@interface AWEIMTopNoticeTipInteractor : AWEIMInteractorObject
@property (nonatomic) AWEIMTopNoticeTipView noticeTipView;
@property (nonatomic) AWEIMMessageBaseViewController vcParent;
@property (nonatomic) q type;
@property (nonatomic) BOOL showing;
@property (nonatomic) <AWEIMTopNoticeTipInteractorProtocol> topTipViewDelegate;
- (id)getNoticeTipSize;
- (id)noticeTipView;
- (void)setNoticeTipView:;
- (void)setTopTipViewDelegate:;
- (void)setVcParent:;
- (void)showTopNoticeTipViewWithText:withType:;
- (id)topTipViewDelegate;
- (id)vcParent;
- (void)layoutViews;
- (void)setType:;
- (long long)type;
- (void).cxx_destruct;
- (BOOL)showing;
- (void)setShowing:;
- (void)dismissView;
@end
