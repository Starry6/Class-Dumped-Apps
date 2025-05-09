@interface ICSUserAddress : ICSProperty
@property (nonatomic) BOOL rsvp;
@property (nonatomic) NSString cn;
@property (nonatomic) NSInteger cutype;
@property (nonatomic) NSString dir;
@property (nonatomic) NSInteger partstat;
@property (nonatomic) NSInteger schedulestatus;
@property (nonatomic) NSInteger scheduleagent;
@property (nonatomic) NSInteger scheduleforcesend;
@property (nonatomic) NSInteger role;
@property (nonatomic) ICSDateValue partstatModified;
@property (nonatomic) ICSAlternateTimeProposal alternateTimeProposal;
@property (nonatomic) BOOL x_apple_self_invited;
@property (nonatomic) NSString email;
@property (nonatomic) NSString x_apple_telephone;
@property (nonatomic) NSString likenessDataString;
@property (nonatomic) NSString x_apple_inviterName;
- (id)emailAddress;
- (id)initWithURL:;
- (id)phoneNumber;
- (id)displayName;
- (void)setEmail:;
- (id)initWithEmailAddress:;
- (void)setRole:;
- (int)role;
- (id)email;
- (BOOL)isPhoneNumber;
- (void)setURL:;
- (BOOL)hasPhoneNumber;
- (id)initWithPhoneNumber:;
- (void)setDir:;
- (void)setCn:;
- (void)setRsvp:;
- (void)setAlternateTimeProposal:;
- (int)cutype;
- (id)alternateTimeProposal;
- (void)setCutype:;
- (void)setScheduleforcesend:;
- (void)setScheduleagent:;
- (id)cn;
- (id)partstatModified;
- (int)partstat;
- (int)schedulestatus;
- (int)scheduleforcesend;
- (int)scheduleagent;
- (BOOL)rsvp;
- (void)setX_apple_telephone:;
- (void)setPartstat:;
- (void)setPartstatModified:;
- (BOOL)hasEmailAddress;
- (id)propertiesToObscure;
- (id)parametersToObscure;
- (BOOL)shouldObscureValue;
- (id)propertiesToHide;
- (void)fixAddress;
- (id)sanitizeAddressString:;
- (BOOL)isEmailAddress;
- (BOOL)isHTTPAddress;
- (BOOL)isHTTPSAddress;
- (id)dir;
- (void)setSchedulestatus:;
- (void)setX_apple_self_invited:;
- (BOOL)x_apple_self_invited;
- (id)x_apple_telephone;
- (void)setLikenessDataString:;
- (id)likenessDataString;
- (void)setX_apple_inviterName:;
- (id)x_apple_inviterName;
- (void)setX_calendarserver_email:;
- (id)x_calendarserver_email;
+ (id)URLForNoMail;
+ (int)calendarUserFromICSString:;
+ (int)participationStatusFromICSString:;
+ (int)scheduleStatusFromICSString:;
+ (int)scheduleAgentFromICSString:;
+ (int)scheduleForceSendFromICSString:;
+ (int)roleFromICSString:;
+ (id)ICSStringFromCalendarUser:;
+ (id)ICSStringFromParticipationStatus:;
+ (id)ICSStringFromScheduleAgent:;
+ (id)ICSStringFromScheduleStatus:;
+ (id)ICSStringFromScheduleForceSend:;
+ (id)ICSStringFromRole:;
@end
