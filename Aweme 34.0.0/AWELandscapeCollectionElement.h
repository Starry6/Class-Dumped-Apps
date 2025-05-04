@interface AWELandscapeCollectionElement : AWELandscapeInteractionBaseElement
@property (nonatomic) AWELandScapeCollectionButton collectionButton;
@property (nonatomic) <AWEAwemePlayInteractionInteractorProtocol> interactor;
- (void)setCollectionButton:;
- (id)collectionButton;
- (void)postDidCollectNotificationWithAction:;
- (void)trackCollectWithEventName:;
- (void)realClickCollectionButtonAction;
- (void)handleCollectionButtonTap;
- (id)interactor;
- (void)setInteractor:;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
@end
