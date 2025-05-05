@interface BDUGLuckyBDModel : BDUGLuckyJSONModel
- (id)initWithDictionary:error:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)enableBDModel;
+ (unsigned long long)modelCustomMappingOptions;
@end
