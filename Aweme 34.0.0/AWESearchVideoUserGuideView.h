@interface AWESearchVideoUserGuideView : UIView
@property (nonatomic) LOTAnimationView userGuideLOTView;
@property (nonatomic) UILabel guideLabel;
@property (nonatomic) BOOL hasDismiss;
@property (nonatomic) NSDictionary logExtraDict;
@property (nonatomic) NSString keyword;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLogExtraDict:;
- (id)logExtraDict;
- (id)guideLabel;
- (void)setGuideLabel:;
- (void)setHasDismiss:;
- (BOOL)hasDismiss;
- (void)setUpSubViews;
- (void)dismissWithClick:;
- (void)setUserGuideLOTView:;
- (id)userGuideLOTView;
- (void)trackUserGuideViewShow;
- (void)trackUserGuideViewDismissWithClick:;
- (void)play;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)keyword;
- (void)setKeyword:;
@end
