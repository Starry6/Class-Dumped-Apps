@interface TRIFactorProviderIdent : NSObject
@property (nonatomic) C type;
@property (nonatomic) NSString value;
- (id)initWithType:value:;
- (id)init;
- (unsigned long long)hash;
- (unsigned char)type;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithReplacementType:;
- (id)value;
- (BOOL)isEqualToIdent:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)copyWithReplacementValue:;
+ (id)identWithType:value:;
@end
