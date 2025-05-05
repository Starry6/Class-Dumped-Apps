@interface MFDatePickerItem : NSObject
@property (nonatomic) MFDatePickerItemIdentifier identifier;
@property (nonatomic) NSDate selectedDate;
@property (nonatomic) NSDate selectedTime;
@property (nonatomic) NSTimeZone selectedTimeZone;
@property (nonatomic) NSString selectedCityName;
@property (nonatomic) q datePickerComponentType;
- (id)identifier;
- (void)setSelectedDate:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)selectedDate;
- (BOOL)isEqual:;
- (id)selectedTime;
- (id)initWithIdentifier:selectedDate:selectedTime:selectedTimeZone:selectedCityName:datePickerComponentType:;
- (void)setSelectedTime:;
- (id)selectedTimeZone;
- (void)setSelectedTimeZone:;
- (id)selectedCityName;
- (void)setSelectedCityName:;
- (long long)datePickerComponentType;
- (void)setDatePickerComponentType:;
@end
