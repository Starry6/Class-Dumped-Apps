@interface SAAceResult : SABaseAceObject
@property (nonatomic) <SAAceSerializable> result;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)result;
- (id)groupIdentifier;
- (id)encodedClassName;
- (void)setResult:;
+ (id)aceResult;
+ (id)aceResultWithDictionary:context:;
@end
