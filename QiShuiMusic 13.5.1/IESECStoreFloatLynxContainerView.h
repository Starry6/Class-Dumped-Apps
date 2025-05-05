@interface IESECStoreFloatLynxContainerView : UIView
@property (nonatomic) IESECRelationActivityDynamicComponentModel model;
@property (nonatomic) PuzzleHybridContainer container;
@property (nonatomic) NSDictionary metaInfo;
@property (nonatomic) <IESECStoreFloatLynxContainerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)containerFrame:;
- (void)viewDidLoadFailedWithUrl:error:;
- (BOOL)__switchToTabType:;
- (id)initWithModuleComponent:metaInfo:;
- (void)loadLynx;
- (void)lynxView:didRecieveError:;
- (void)lynxView:onSetup:;
- (void)sendEvent:params:;
- (void)viewDidFinishLoadWithURL:;
- (id)model;
- (void)setContainer:;
- (void)setModel:;
- (void)setDelegate:;
- (id)container;
- (id)delegate;
- (void).cxx_destruct;
- (id)metaInfo;
- (void)setMetaInfo:;
@end
