@interface IESLiveSaaSGoodsReservationModel : BDDynamicMTLModel
@property (nonatomic) NSNumber reservationStartTime;
@property (nonatomic) NSNumber reservationEndTime;
@property (nonatomic) NSNumber serverTime;
@property (nonatomic) BOOL hasReservation;
@property (nonatomic) NSDictionary buttonLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getCompaignSubType;
- (BOOL)inReservation;
- (id)reservationEndTime;
- (id)reservationStartTime;
- (void)setHasReservation:;
- (void)setReservationEndTime:;
- (void)setReservationStartTime:;
- (void)setServerTime:;
- (void).cxx_destruct;
- (id)buttonLabel;
- (id)serverTime;
- (void)setButtonLabel:;
- (BOOL)hasReservation;
+ (id)JSONKeyPathsByPropertyKey;
@end
