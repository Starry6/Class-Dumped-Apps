@interface WFDatePickerConfiguration : NSObject
@property (nonatomic) NSString datePickerMode;
@property (nonatomic) NSDate defaultDate;
@property (nonatomic) NSDate minimumDate;
@property (nonatomic) NSDate maximumDate;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)defaultDate;
- (void)setDefaultDate:;
- (id)minimumDate;
- (void)setMinimumDate:;
- (id)maximumDate;
- (void)setMaximumDate:;
- (id)datePickerMode;
- (void)setDatePickerMode:;
+ (BOOL)supportsSecureCoding;
@end
