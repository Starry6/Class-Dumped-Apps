@interface SAGKSourceLinkPod : SAGKPodView
@property (nonatomic) NSString linkText;
@property (nonatomic) SAUIAppPunchOut punchOut;
- (id)groupIdentifier;
- (id)encodedClassName;
- (void)setPunchOut:;
- (id)punchOut;
- (id)linkText;
- (void)setLinkText:;
+ (id)sourceLinkPod;
+ (id)sourceLinkPodWithDictionary:context:;
@end
