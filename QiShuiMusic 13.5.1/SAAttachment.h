@interface SAAttachment : SADomainObject
- (id)groupIdentifier;
- (id)encodedClassName;
+ (id)attachment;
+ (id)attachmentWithDictionary:context:;
@end
