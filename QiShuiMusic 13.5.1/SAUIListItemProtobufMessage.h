@interface SAUIListItemProtobufMessage : SAAceView
@property (nonatomic) NSData dynamicURLImageResourceData;
@property (nonatomic) NSData dynamicURLImageResourceDataEvodBumper;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)dynamicURLImageResourceData;
- (void)setDynamicURLImageResourceData:;
- (id)dynamicURLImageResourceDataEvodBumper;
- (void)setDynamicURLImageResourceDataEvodBumper:;
+ (id)listItemProtobufMessage;
+ (id)listItemProtobufMessageWithDictionary:context:;
@end
