@interface SALocalSearchProtobufAttribute : AceObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString value;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setName:;
- (id)groupIdentifier;
- (void)setValue:;
- (id)encodedClassName;
- (id)value;
- (id)name;
+ (id)protobufAttribute;
+ (id)protobufAttributeWithDictionary:context:;
@end
