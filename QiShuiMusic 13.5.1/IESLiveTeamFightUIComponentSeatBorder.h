@interface IESLiveTeamFightUIComponentSeatBorder : IESLiveTeamFightUIComponent
@property (nonatomic) CALayer seatBorderRedLayer;
@property (nonatomic) CALayer seatBorderBlueLayer;
@property (nonatomic) NSArray redSeats;
@property (nonatomic) NSArray blueSeats;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateTeamFightSeatBorderIfNeed;
- (id)blueSeats;
- (void)clearBorder;
- (void)componentFinished;
- (id)createCoordinateInfoWithRect:;
- (void)currentLayoutDidChangedSlotsCount:;
- (void)currentLayoutUIDidUpdateFrom:to:;
- (void)didSetAttachingDIContext;
- (void)didUpdateTeamFightScore;
- (void)didUpdatedGuestListWithActiveList:;
- (id)redSeats;
- (id)seatBorderBlueLayer;
- (id)seatBorderRedLayer;
- (void)setBlueSeats:;
- (void)setRedSeats:;
- (void)setSeatBorderBlueLayer:;
- (void)setSeatBorderRedLayer:;
- (void)dealloc;
- (void).cxx_destruct;
@end
