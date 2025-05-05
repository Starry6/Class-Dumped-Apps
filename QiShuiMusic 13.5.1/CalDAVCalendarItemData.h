@interface CalDAVCalendarItemData : CoreDAVLeafDataPayload
@property (nonatomic) NSString scheduleTag;
@property (nonatomic) CalDAVCalendarServerScheduleChangesItem scheduleChanges;
@property (nonatomic) CalDAVUpdateOwnerItem createdBy;
@property (nonatomic) CalDAVUpdateOwnerItem updatedBy;
- (void)setCreatedBy:;
- (id)createdBy;
- (void).cxx_destruct;
- (id)scheduleChanges;
- (void)setScheduleChanges:;
- (id)scheduleTag;
- (void)setScheduleTag:;
- (id)updatedBy;
- (void)setUpdatedBy:;
@end
