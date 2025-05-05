@interface SAGKWebLinkPod : SAGKPodView
@property (nonatomic) NSArray links;
- (id)groupIdentifier;
- (id)links;
- (id)encodedClassName;
- (void)setLinks:;
+ (id)webLinkPod;
+ (id)webLinkPodWithDictionary:context:;
@end
