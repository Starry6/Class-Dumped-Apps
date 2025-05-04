@interface AWEThemeChooseTimeModel : NSObject
@property (nonatomic) NSString selectTime;
@property (nonatomic) NSString startTimeHour;
@property (nonatomic) NSString startTimeMin;
@property (nonatomic) NSString endTimeHour;
@property (nonatomic) NSString endTimeMin;
- (id)startTimeHour;
- (id)startTimeMin;
- (id)endTimeHour;
- (id)endTimeMin;
- (void)setStartTimeHour:;
- (void)setStartTimeMin:;
- (void)setEndTimeHour:;
- (void)setEndTimeMin:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)copyWithZone:;
- (id)selectTime;
- (void)setSelectTime:;
@end
