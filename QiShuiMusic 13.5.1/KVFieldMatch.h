@interface KVFieldMatch : NSObject
- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (long long)fieldType;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned char)fieldComponent;
- (id)initWithSpanInfo:fieldType:fieldComponent:;
- (id)fieldSpanInfo;
- (id)fieldSpanValue;
- (BOOL)isValueMatch;
- (BOOL)isLabelMatch;
- (BOOL)isEqualToSpanMatchField:;
+ (id)valueMatchWithFieldType:spanInfo:;
+ (id)labelMatchWithFieldType:spanInfo:;
@end
