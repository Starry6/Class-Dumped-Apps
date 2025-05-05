@interface EKiMIPInvitation : EKiMIPUpdate
- (id)attendees;
- (void).cxx_destruct;
- (id)emailSubject;
- (id)emailBody;
- (id)initWithEvent:withDiff:;
+ (BOOL)shouldSendEmailForEvent:withDiff:;
@end
