@interface SAProtobufMessage : SADomainObject
@property (nonatomic) NSData data;
@property (nonatomic) NSString typeName;
- (id)typeName;
- (id)groupIdentifier;
- (void)setTypeName:;
- (id)data;
- (id)encodedClassName;
- (void)setData:;
+ (id)protobufMessage;
+ (id)protobufMessageWithDictionary:context:;
@end
