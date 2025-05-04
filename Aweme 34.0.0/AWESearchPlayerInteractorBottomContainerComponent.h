@interface AWESearchPlayerInteractorBottomContainerComponent : AWESearchComponent
@property (nonatomic) UIView contentView;
@property (nonatomic) <AWESearchBottomNormalBarComponentProvider> bottomNormalBarComponent;
@property (nonatomic) <AWESearchHotTipComponentProvider> hotTipComponent;
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
- (void)updateWithModel:forceUpdate:;
- (void)componentViewLayoutSubviews;
- (id)provideProtocol;
- (void)p_loadComponent;
- (id)bottomNormalBarComponent;
- (id)hotTipComponent;
- (void)setBottomNormalBarComponent:;
- (void)setHotTipComponent:;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)componentView;
+ (id)componentSizeForModel:width:;
+ (id)getCreatSubComponentsArrayWithModel:;
@end
