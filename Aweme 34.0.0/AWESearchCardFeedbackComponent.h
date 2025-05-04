@interface AWESearchCardFeedbackComponent : AWESearchComponent
@property (nonatomic) UIView contentView;
@property (nonatomic) AWESearchFeedbackView feedbackButton;
@property (nonatomic) AWESearchCardFeedbackComponentModel componentModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) AWESearchEventDispather eventDispather;
@property (nonatomic) <AWESearchContainerProtocol> containerContext;
@property (nonatomic) <AWESearchComponentProtocol> componentContext;
@property (nonatomic) NSDictionary dictLogExtraInfo;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
@property (nonatomic) BOOL hidden;
- (void)setComponentModel:;
- (id)componentModel;
- (void)componentViewDidAppear:;
- (void)trackFeedBackShow;
- (void)trackFeedBackClick;
- (void)singeTapButton;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)componentView;
- (void)updateWithModel:;
- (id)feedbackButton;
- (void)setFeedbackButton:;
+ (id)componentSizeForModel:width:;
@end
