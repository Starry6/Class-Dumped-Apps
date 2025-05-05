@interface SAMicroblogTwitterPost : SAMicroblogObject
- (id)groupIdentifier;
- (id)encodedClassName;
+ (id)twitterPost;
+ (id)twitterPostWithDictionary:context:;
@end
