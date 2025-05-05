@interface IESLiveSaaSGuideFragment : IESLiveRoomComponent
@property (nonatomic) IESLiveSaaSGuideStore store;
@property (nonatomic) NSMutableSet observerSet;
@property (nonatomic) BOOL keyboardShow;
@property (nonatomic) <IESLiveSaaSCommonGuideActions> guideActionsCreator;
@property (nonatomic) <IESLiveSaaSURLSchemaHandler> schemaURLHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setObserverSet:;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (id)guideActionsCreator;
- (BOOL)keyboardShow;
- (id)schemaURLHandler;
- (void)setGuideActionsCreator:;
- (void)setKeyboardShow:;
- (void)setSchemaURLHandler:;
- (void)showGuideView;
- (void)setStore:;
- (id)observerSet;
- (void).cxx_destruct;
- (id)store;
+ (id)componentWithRoom:trackContext:componentContext:;
@end
