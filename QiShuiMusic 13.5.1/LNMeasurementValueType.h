@interface LNMeasurementValueType : LNValueType
@property (nonatomic) q unitType;
- (id)cat_dialogType;
- (id)cat_value:;
- (id)cat_keyPath;
- (Class)objectClass;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (long long)unitType;
- (id)typeIdentifierAsString;
- (id)initWithUnitType:;
+ (BOOL)supportsSecureCoding;
+ (id)lengthValueType;
+ (id)speedValueType;
+ (id)energyValueType;
+ (id)unsupportedMeasurementValueType;
+ (id)durationValueType;
+ (id)temperatureValueType;
+ (id)volumeValueType;
+ (id)massValueType;
@end
