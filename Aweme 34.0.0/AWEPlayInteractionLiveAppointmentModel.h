@interface AWEPlayInteractionLiveAppointmentModel : AWEBaseApiModel
@property (nonatomic) q liveStartTime;
@property (nonatomic) NSNumber appointmentId;
@property (nonatomic) q type;
@property (nonatomic) q status;
@property (nonatomic) q lastStartTime;
@property (nonatomic) q count;
@property (nonatomic) BOOL hasReservered;
- (id)appointmentId;
- (long long)liveStartTime;
- (void)setLiveStartTime:;
- (void)setAppointmentId:;
- (BOOL)hasReservered;
- (void)setHasReservered:;
- (BOOL)isNextAppointmentType;
- (void)setCount:;
- (void)setStatus:;
- (long long)count;
- (long long)type;
- (void)setType:;
- (void).cxx_destruct;
- (long long)status;
- (id)copyWithZone:;
- (long long)lastStartTime;
- (void)setLastStartTime:;
+ (id)modelWithButtonInfo:;
+ (id)JSONKeyPathsByPropertyKey;
@end
