@interface INWellnessObjectResultValue : NSObject
@property (nonatomic) INDateComponentsRange recordDate;
@property (nonatomic) NSString unit;
@property (nonatomic) NSArray values;
@property (nonatomic) q resultType;
- (id)_dictionaryRepresentation;
- (id)values;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (long long)resultType;
- (void)encodeWithCoder:;
- (id)descriptionAtIndent:;
- (void).cxx_destruct;
- (id)unit;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)recordDate;
- (id)initWithRecordDate:unit:values:resultType:;
+ (BOOL)supportsSecureCoding;
@end
