@interface EKiMIPCancel : EKiMIPHandler
- (id)attendees;
- (void).cxx_destruct;
- (id)emailSubject;
- (id)emailBody;
- (id)emailAttachmentName;
- (int)icsMethod;
- (id)attachmentData;
- (id)initWithEvent:andAttendees:;
+ (BOOL)shouldSendEmailForEvent:removedAttendees:;
@end
