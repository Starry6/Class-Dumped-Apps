@interface SARange : SADomainObject
@property (nonatomic) q length;
@property (nonatomic) q start;
- (void)setStart:;
- (id)groupIdentifier;
- (long long)start;
- (id)encodedClassName;
- (long long)length;
- (void)setLength:;
+ (id)range;
+ (id)rangeWithDictionary:context:;
@end
