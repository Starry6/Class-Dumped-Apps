@interface IESLiveSpeedSlotRedeemHolder : NSObject
@property (nonatomic) IESLiveBottomShortcutButton redeemButton;
@property (nonatomic) <IESLiveRoomServiceAdapter> roomModel;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didLoadSpeedSlotItem:interactionResponder:;
- (void)didSpeedSlotItemClicked:interactionResponder:;
- (id)initWith:componentContext:trackContext:;
- (id)roomModel;
- (void)setRedeemButton:;
- (void)setRoomModel:;
- (void)setTrackContext:;
- (void)tr_toolbarItemClick;
- (void)tr_toolbarItemShow;
- (id)trackContext;
- (void)willLoadSpeedSlotItem:interactionResponder:;
- (void).cxx_destruct;
- (id)redeemButton;
@end
