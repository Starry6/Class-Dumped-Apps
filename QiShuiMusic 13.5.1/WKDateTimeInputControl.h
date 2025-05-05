@interface WKDateTimeInputControl : WKFormPeripheralBase
@property (nonatomic) NSString dateTimePickerCalendarType;
@property (nonatomic) double timePickerValueHour;
@property (nonatomic) double timePickerValueMinute;
- (double)timePickerValueMinute;
- (id)initWithView:;
- (double)timePickerValueHour;
- (void)setTimePickerHour:minute:;
- (id)dateTimePickerCalendarType;
@end
