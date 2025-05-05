@interface IESLivePKComponent : NSObject
@property (nonatomic) IESLivePKModel pkmodel;
@property (nonatomic) <IESLiveRoomServiceAdapter> roomModel;
@property (nonatomic) <IESLiveRevenueInteractPlayModel> playModel;
@property (nonatomic) UIView contentView;
@property (nonatomic) <IESLivePKProvider> pkProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pkmodel;
- (void)componentBusinessPrepare;
- (void)componentDidLoad;
- (void)componentFinished;
- (void)componentInteracting;
- (void)componentPlaying;
- (void)componentPunishing;
- (void)didSetAttachingDIContext;
- (id)pkProvider;
- (id)playModel;
- (id)roomModel;
- (void)setPkProvider:;
- (void)setPkmodel:;
- (void)setPlayModel:;
- (void)setRoomModel:;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
@end
