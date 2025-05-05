@interface TTAccountBaseEntity : NSObject
- (id)toOriginalDictionary;
- (id)toDictionary;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
@end
