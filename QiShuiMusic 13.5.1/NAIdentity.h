@interface NAIdentity : NSObject
@property (nonatomic) NSArray characteristics;
- (BOOL)isObject:equalToObject:;
- (unsigned long long)hashOfObject:;
- (unsigned long long)hash;
- (id)characteristics;
- (void).cxx_destruct;
- (void)setCharacteristics:;
- (BOOL)isEqual:;
- (id)initWithCharacteristics:;
- (id)copyWithZone:;
+ (id)na_identity;
@end
