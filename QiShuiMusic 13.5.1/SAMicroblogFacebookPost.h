@interface SAMicroblogFacebookPost : SAMicroblogObject
- (id)groupIdentifier;
- (id)encodedClassName;
+ (id)facebookPost;
+ (id)facebookPostWithDictionary:context:;
@end
