@interface SAUIDomainObjectPicker : SAUISnippet
@property (nonatomic) NSString idNodeName;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)idNodeName;
- (void)setIdNodeName:;
+ (id)domainObjectPicker;
+ (id)domainObjectPickerWithDictionary:context:;
@end
