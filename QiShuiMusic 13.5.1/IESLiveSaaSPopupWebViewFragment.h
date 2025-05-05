@interface IESLiveSaaSPopupWebViewFragment : IESLiveRoomComponent
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) IESLiveSaaSPopupWebViewModel viewModel;
@property (nonatomic) <IESLiveSaaSInternalRouter> internalRouter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindViewModel;
- (id)internalRouter;
- (void)setInternalRouter:;
- (id)viewModel;
- (id)initWithViewModel:;
- (void).cxx_destruct;
- (void)setViewModel:;
+ (id)componentWithRoom:trackContext:componentContext:;
+ (long long)preferredLoadPhase;
@end
