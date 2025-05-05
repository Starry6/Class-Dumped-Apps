@interface IESECLiveDynamicUIComponent : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) IESECLiveContext liveContext;
@property (nonatomic) IESECLiveDynamicUIContext context;
@property (nonatomic) <IESECLiveDynamicUIComponentDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLiveContext:;
- (void)displayContentView;
- (void)dynamicRegion:resize:;
- (void)dynamicRegion:updateContainerBG:;
- (id)initWithContext:delegate:liveContext:;
- (id)liveContext;
- (id)setupLynxCardWithContext:;
- (id)setupNativeCardWithContext:;
- (BOOL)updateDynamicUIWithContext:delegate:liveContext:;
- (id)contentView;
- (id)context;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setContext:;
- (void)updateUI;
@end
