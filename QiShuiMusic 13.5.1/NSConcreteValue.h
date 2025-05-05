@interface NSConcreteValue : NSValue
- (id)_value;
- (BOOL)isEqualToValue:;
- (void)getValue:size:;
- (void)getValue:;
- (id)objCType;
- (BOOL)_matchType:size:strict:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
