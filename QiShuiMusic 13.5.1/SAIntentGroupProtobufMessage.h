@interface SAIntentGroupProtobufMessage : AceObject
@property (nonatomic) NSData data;
@property (nonatomic) NSString debugString;
@property (nonatomic) NSString typeName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)typeName;
- (id)groupIdentifier;
- (void)setTypeName:;
- (id)data;
- (id)debugString;
- (id)encodedClassName;
- (void)setData:;
- (void)setDebugString:;
+ (id)protobufMessage;
+ (id)protobufMessageWithDictionary:context:;
@end
