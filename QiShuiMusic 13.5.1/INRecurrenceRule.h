@interface INRecurrenceRule : NSObject
@property (nonatomic) Q interval;
@property (nonatomic) q frequency;
@property (nonatomic) Q weeklyRecurrenceDays;
- (long long)frequency;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)descriptionAtIndent:;
- (id)description;
- (BOOL)isEqual:;
- (unsigned long long)interval;
- (id)copyWithZone:;
- (unsigned long long)weeklyRecurrenceDays;
- (id)initWithInterval:frequency:;
- (id)initWithInterval:frequency:weeklyRecurrenceDays:;
+ (BOOL)supportsSecureCoding;
@end
