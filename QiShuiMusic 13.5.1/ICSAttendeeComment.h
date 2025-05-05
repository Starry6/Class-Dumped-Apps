@interface ICSAttendeeComment : ICSProperty
@property (nonatomic) NSString x_calendarserver_attendee_ref;
@property (nonatomic) ICSDateValue x_calendarserver_dtstamp;
- (void)setComment:;
- (id)x_calendarserver_attendee_ref;
- (id)parametersToObscure;
- (BOOL)shouldObscureValue;
- (id)initWithComment:;
- (void)setX_calendarserver_attendee_ref:;
- (void)setX_calendarserver_dtstamp:;
- (id)x_calendarserver_dtstamp;
@end
