@interface EKiMIPHandler : NSObject
@property (nonatomic) EKEvent event;
- (void)setEvent:;
- (id)event;
- (id)attendees;
- (void).cxx_destruct;
- (id)initWithEvent:;
- (BOOL)sendEmail;
- (id)emailSubject;
- (id)emailBody;
- (id)emailAttachmentName;
- (int)icsMethod;
- (id)attachmentData;
- (id)iCalendarDocumentWithMethod:;
+ (BOOL)shouldSendEmailForEvent:withDiff:;
+ (id)emailsFromAttendees:;
@end
