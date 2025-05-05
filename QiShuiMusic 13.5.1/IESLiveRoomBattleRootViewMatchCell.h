@interface IESLiveRoomBattleRootViewMatchCell : IESLiveRoomBattleRootViewSectionCell
@property (nonatomic) UIView containerView;
@property (nonatomic) IESLiveRoomBattleMatchReserveCard reserveCard;
@property (nonatomic) IESLiveRoomBattleMatchWaitingCard waitingCard;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setReserveCard:;
- (void)setWaitingCard:;
- (void)didSetAttachingDIContext;
- (void)matchViewModel:didUpdatedStatus:;
- (id)reserveCard;
- (void)updateWithItem:section:;
- (id)waitingCard;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setupViews;
+ (double)contentHeight;
@end
