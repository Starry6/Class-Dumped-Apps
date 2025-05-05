@interface ICValueHistory : NSObject
@property (nonatomic) q count;
- (id)firstValueBeforeTimestamp:;
- (void)addValuesFromHistory:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)lastValue;
- (void)enumerateValuesUsingBlock:;
- (id)firstValueAfterOrEqualToTimestamp:;
- (void)encodeWithCoder:;
- (id)lastValueAndTimestamp:;
- (void).cxx_destruct;
- (void)removeAllValues;
- (void)removeValuesBeforeTimestamp:;
- (long long)count;
- (void)addValue:timestamp:;
- (id)firstValueBeforeOrEqualToTimestamp:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
