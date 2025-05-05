@interface EKiMIPReply : EKiMIPHandler
- (id)attendees;
- (id)emailSubject;
- (id)emailBody;
- (id)emailAttachmentName;
- (int)icsMethod;
+ (BOOL)shouldSendEmailForEvent:withDiff:;
@end
