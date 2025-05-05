@interface AWEIMPushGuideInteractor : AWEIMInteractorObject
@property (nonatomic) AWEIMPushGuideTipsView tipsView;
@property (nonatomic) BOOL hasAddedPushGuide;
@property (nonatomic) <AWEIMPushGuideInteractorDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)pushGuideTipsViewOnClickConfirm;
- (void)dismissTipsView;
- (BOOL)hasAddedPushGuide;
- (void)pushGuideTipsViewOnClickClose;
- (void)setHasAddedPushGuide:;
- (void)setTipsView:;
- (void)showPushGuideIfNeeded;
- (id)tipsView;
- (id)vcParent;
- (double)contentHeight;
- (void)setDelegate:;
- (void)viewDidDisappear:;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)isDisplaying;
@end
