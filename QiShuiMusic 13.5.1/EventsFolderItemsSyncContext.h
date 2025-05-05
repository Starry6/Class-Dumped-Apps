@interface EventsFolderItemsSyncContext : NSObject
@property (nonatomic) NSInteger calEventChangeId;
@property (nonatomic) NSInteger calRecurrenceChangeId;
@property (nonatomic) NSInteger calAlarmChangeId;
@property (nonatomic) NSInteger calAttendeeChangeId;
@property (nonatomic) NSInteger calAttachmentChangeId;
@property (nonatomic) NSInteger highestSequenceNumber;
- (int)calEventChangeId;
- (void)setCalEventChangeId:;
- (int)calRecurrenceChangeId;
- (void)setCalRecurrenceChangeId:;
- (int)calAlarmChangeId;
- (void)setCalAlarmChangeId:;
- (int)calAttendeeChangeId;
- (void)setCalAttendeeChangeId:;
- (int)calAttachmentChangeId;
- (void)setCalAttachmentChangeId:;
- (int)highestSequenceNumber;
- (void)setHighestSequenceNumber:;
@end
