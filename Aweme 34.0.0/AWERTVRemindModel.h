@interface AWERTVRemindModel : NSObject
@property (nonatomic) NSString reminderUserID;
@property (nonatomic) NSString roomID;
@property (nonatomic) double callAt;
@property (nonatomic) double showAt;
@property (nonatomic) q remindType;
- (long long)remindType;
- (id)initWithReminderUserID:callAt:;
- (void)updateShowTimestamp:;
- (void)updateRoomID:;
- (void)updateRemindType:;
- (id)reminderUserID;
- (double)callAt;
- (double)showAt;
- (id)roomID;
- (void).cxx_destruct;
@end
