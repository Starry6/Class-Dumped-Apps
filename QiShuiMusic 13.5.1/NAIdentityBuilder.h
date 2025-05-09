@interface NAIdentityBuilder : NSObject
@property (nonatomic) NSMutableArray characteristics;
@property (nonatomic) NAIdentity builtIdentity;
- (id)init;
- (id)appendFloatCharacteristic:;
- (id)appendCharacteristic:;
- (BOOL)isObject:equalToObject:;
- (id)appendDoubleCharacteristic:;
- (unsigned long long)hashOfObject:;
- (void)setBuiltIdentity:;
- (unsigned long long)hash;
- (id)build;
- (id)appendRangeCharacteristic:;
- (id)characteristics;
- (id)builtIdentity;
- (id)initWithIdentity:;
- (void).cxx_destruct;
- (id)appendUnsignedIntegerCharacteristic:withRole:;
- (id)appendFloatCharacteristic:withRole:;
- (id)appendIntegerCharacteristic:;
- (id)appendRangeCharacteristic:withRole:;
- (id)appendIntegerCharacteristic:withRole:;
- (id)appendCharacteristic:withRole:;
- (void)setCharacteristics:;
- (BOOL)isEqual:;
- (id)appendUnsignedIntegerCharacteristic:;
- (id)appendDoubleCharacteristic:withRole:;
- (id)copyWithZone:;
- (id)appendCharacteristic:withRole:comparatorBlock:hashBlock:;
+ (id)na_identity;
+ (id)builder;
+ (id)builderWithIdentity:;
+ (id)buildPointerIdentity;
@end
