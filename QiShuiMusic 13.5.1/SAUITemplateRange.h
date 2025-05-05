@interface SAUITemplateRange : AceObject
@property (nonatomic) q length;
@property (nonatomic) q location;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (long long)location;
- (id)encodedClassName;
- (void)setLocation:;
- (long long)length;
- (void)setLength:;
+ (id)range;
+ (id)rangeWithDictionary:context:;
@end
