@interface MCAlwaysOnVPNPayload : MCVPNPayloadBase
- (id)initWithDictionary:profile:outError:;
- (id)_validatePayload:;
+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
@end
