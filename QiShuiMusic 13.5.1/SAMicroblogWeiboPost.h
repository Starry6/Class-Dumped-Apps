@interface SAMicroblogWeiboPost : SAMicroblogObject
- (id)groupIdentifier;
- (id)encodedClassName;
+ (id)weiboPost;
+ (id)weiboPostWithDictionary:context:;
@end
