@interface AWELandscapeDiggElementViewModel : NSObject
@property (nonatomic) <AWEAwemePlayInteractionInteractorProtocol> interactor;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWEPageContext<AWELandscapePageContextInteractionProtocol> context;
@property (nonatomic) <AWELandscapeDiggElementDelegate> delegate;
- (void)doSafeDigg:enterMethod:ignoreUnlogin:animationBlock:;
- (void)updateWithModel:context:;
- (void)handleDiggVideoWithType:;
- (void)setModel:;
- (id)delegate;
- (id)interactor;
- (void)setInteractor:;
- (id)model;
- (void)setContext:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)context;
@end
