@interface EKRecurrenceIdentifier : NSObject
@property (nonatomic) NSString localUID;
@property (nonatomic) NSDate recurrenceDate;
@property (nonatomic) NSString identifierString;
- (void)setRecurrenceDate:;
- (unsigned long long)hash;
- (id)recurrenceDate;
- (void).cxx_destruct;
- (id)description;
- (id)identifierString;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)localUID;
- (void)setLocalUID:;
- (void)setIdentifierString:;
+ (id)recurrenceIdentifierWithLocalUID:recurrenceDate:;
+ (id)recurrenceIdentifierWithString:;
+ (id)localUIDForIdentifierString:;
+ (id)_dateFormatStripTime:stripTimeZone:;
+ (BOOL)_splitIdentifier:intoLocalUID:recurrenceDate:;
+ (id)_recurrenceIdentifierWithRecurrenceDate:localUID:stripTime:stripTimeZone:;
+ (id)_recurrenceStringForDate:stripTime:stripTimeZone:;
@end
