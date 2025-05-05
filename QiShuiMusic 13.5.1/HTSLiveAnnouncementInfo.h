@interface HTSLiveAnnouncementInfo : IESLivePBBaseMessage
@property (nonatomic) NSString scheduledTimeText;
@property (nonatomic) NSString content;
@property (nonatomic) BOOL subscribed;
@property (nonatomic) q appointmentId;
@property (nonatomic) NSInteger scheduledTime;
@property (nonatomic) NSInteger scheduledDate;
@property (nonatomic) GPBInt32Array scheduledWeekdaysArray;
@property (nonatomic) Q scheduledWeekdaysArray_Count;
+ (id)descriptor;
@end
