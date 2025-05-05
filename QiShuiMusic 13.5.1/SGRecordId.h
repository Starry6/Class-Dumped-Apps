@interface SGRecordId : NSObject
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (long long)numericValue;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithInternalEntityId:;
- (long long)internalEntityId;
- (BOOL)isEqualToRecordId:;
+ (BOOL)supportsSecureCoding;
+ (id)recordIdWithInternalEntityId:;
+ (id)recordIdWithNumericValue:;
@end
