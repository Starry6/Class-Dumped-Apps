@interface TSgPTPTime : NSObject
@property (nonatomic) Q nanosecondsSinceEpoch;
@property (nonatomic) Q seconds;
@property (nonatomic) I nanoseconds;
@property (nonatomic) Q grandmasterIdentity;
@property (nonatomic) S localPortNumber;
@property (nonatomic) BOOL ptpTimescale;
@property (nonatomic) BOOL timeTraceable;
@property (nonatomic) BOOL frequencyTraceable;
- (id)init;
- (unsigned long long)seconds;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned int)nanoseconds;
- (unsigned long long)grandmasterIdentity;
- (unsigned long long)nanosecondsSinceEpoch;
- (id)initWithSeconds:nanoseconds:onGrandmaster:withLocalPortNumber:ptpTimescale:timeTraceable:frequencyTraceable:;
- (id)initWithNanosecondsSinceEpoch:onGrandmaster:withLocalPortNumber:ptpTimescale:timeTraceable:frequencyTraceable:;
- (unsigned short)localPortNumber;
- (BOOL)isPTPTimescale;
- (BOOL)isTimeTraceable;
- (BOOL)isFrequencyTraceable;
@end
