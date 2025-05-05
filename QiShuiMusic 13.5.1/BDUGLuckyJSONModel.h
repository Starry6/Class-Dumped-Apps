@interface BDUGLuckyJSONModel : JSONModel
- (id)valueForUndefinedKey:;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
