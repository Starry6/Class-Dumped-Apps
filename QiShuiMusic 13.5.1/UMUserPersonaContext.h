@interface UMUserPersonaContext : NSObject
- (id)init;
- (void)setPropertiesFromUserPersona:;
- (id)copyPersonaContext:;
- (void).cxx_destruct;
- (void)contextAdopt;
- (id)copyWithZone:;
+ (id)currentPersonaContext;
@end
