@interface WKDateTimePicker : NSObject
@property (nonatomic) NSString calendarType;
@property (nonatomic) double hour;
@property (nonatomic) double minute;
- (double)minute;
- (double)hour;
- (void)done:;
- (void)dealloc;
- (void)setHour:minute:;
- (void).cxx_destruct;
- (id)controlView;
- (void)reset:;
- (id).cxx_construct;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (void)_dateChanged;
- (id)_sanitizeInputValueForFormatter:;
- (void)datePickerChanged:;
- (id)initWithView:datePickerMode:;
- (void)handleDatePickerPresentationDismissal;
- (void)removeDatePickerPresentation;
- (void)showDateTimePicker;
- (BOOL)shouldForceGregorianCalendar;
- (id)dateFormatterForPicker;
- (void)setDateTimePickerToInitialValue;
- (id)calendarType;
@end
