@interface CalDAVFreeBusyLookupTask : CalDAVScheduleTask
@property (nonatomic) NSString maskedUID;
- (void).cxx_destruct;
- (id)initWithOrganizer:originator:attendees:start:end:outboxURL:maskedUID:;
- (id)initWithOrganizer:originator:attendees:start:end:outboxURL:maskedUID:extendedFreeBusy:prodID:;
- (id)maskedUID;
- (void)setMaskedUID:;
+ (id)_freeBusyDocumentWithOrganizer:attendees:start:end:maskedUID:extendedFreeBusy:prodID:;
+ (id)_icsDate:calendar:;
@end
