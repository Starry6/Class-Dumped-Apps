@interface AWESearchPlayerInteractorTitleContainerComponent : AWESearchComponent
@property (nonatomic) UIView contentView;
@property (nonatomic) AWESearchPlayerInteractorTitleContainerComponentModel titleContainerModel;
@property (nonatomic) <AWESearchTitleComponentProvider> titleComponent;
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
- (id)titleComponent;
- (id)titleContainerModel;
- (void)setTitleContainerModel:;
- (void)setTitleComponent:;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)componentView;
+ (id)componentSizeForModel:width:;
@end
