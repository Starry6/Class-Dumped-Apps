@interface SAIntentGroupDirectInvocation : AceObject
@property (nonatomic) NSData data;
@property (nonatomic) NSString invocationIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)data;
- (id)encodedClassName;
- (void)setData:;
- (id)invocationIdentifier;
- (void)setInvocationIdentifier:;
+ (id)directInvocationWithDictionary:context:;
@end
