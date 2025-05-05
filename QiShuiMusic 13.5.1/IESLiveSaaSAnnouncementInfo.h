@interface IESLiveSaaSAnnouncementInfo : BDDynamicMTLModel
@property (nonatomic) NSString scheduledTimeText;
@property (nonatomic) NSString content;
@property (nonatomic) BOOL subscribed;
@property (nonatomic) NSNumber appointmentId;
@property (nonatomic) NSNumber scheduledTime;
@property (nonatomic) NSNumber scheduledDate;
@property (nonatomic) NSArray scheduledWeekdays;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)appointmentId;
- (id)scheduledTimeText;
- (id)scheduledWeekdays;
- (void)setAppointmentId:;
- (void)setScheduledTimeText:;
- (void)setScheduledWeekdays:;
- (void)setSubscribed:;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (BOOL)subscribed;
- (id)scheduledTime;
- (void)setScheduledTime:;
- (id)scheduledDate;
- (void)setScheduledDate:;
+ (id)JSONKeyPathsByPropertyKey;
@end
