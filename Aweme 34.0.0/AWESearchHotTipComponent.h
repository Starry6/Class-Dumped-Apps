@interface AWESearchHotTipComponent : AWESearchComponent
@property (nonatomic) UIView contentView;
@property (nonatomic) AWESearchHotTipComponentModel model;
@property (nonatomic) UIView<AWEFeedBottomTipProtocol> hotTipView;
@property (nonatomic) AWESearchEventDispather eventDispather;
@property (nonatomic) <AWESearchContainerProtocol> containerContext;
@property (nonatomic) <AWESearchComponentProtocol> componentContext;
@property (nonatomic) NSDictionary dictLogExtraInfo;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
@property (nonatomic) BOOL hidden;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidLoad;
- (void)updateWithModel:forceUpdate:;
- (void)componentViewLayoutSubviews;
- (id)hotTipView;
- (void)setHotTipView:;
- (void)setModel:;
- (id)contentView;
- (id)model;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)componentView;
@end
