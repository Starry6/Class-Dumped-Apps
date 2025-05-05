@interface MTIDSpan : NSObject
@property (nonatomic) NSDate referenceDate;
@property (nonatomic) Q serialNumber;
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate endDate;
- (unsigned long long)serialNumber;
- (id)startDate;
- (void)setSerialNumber:;
- (void)setStartDate:;
- (void)setReferenceDate:;
- (void)setEndDate:;
- (id)endDate;
- (void).cxx_destruct;
- (id)referenceDate;
- (id)initWithScheme:date:referenceDate:;
+ (id)spanForScheme:date:referenceDate:;
+ (id)localCalendar;
@end
