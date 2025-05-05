@interface IESLiveRevenueInteractPlayComponent : NSObject
@property (nonatomic) <IESLiveRevenueInteractProvider> interactProvider;
@property (nonatomic) <IESLiveRevenueInteractPlayModel> playModel;
@property (nonatomic) <IESLiveRoomServiceAdapter> roomModel;
@property (nonatomic) UIView contentView;
@property (nonatomic) NSMutableDictionary battleViewDic;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)battleViewDic;
- (void)didSetAttachingDIContext;
- (id)interactProvider;
- (id)playModel;
- (id)roomModel;
- (void)setBattleViewDic:;
- (void)setInteractProvider:;
- (void)setPlayModel:;
- (void)setRoomModel:;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
@end
