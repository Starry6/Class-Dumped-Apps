@interface SAGKDisambiguationPod : SAGKPodView
@property (nonatomic) NSString text;
- (id)groupIdentifier;
- (void)setText:;
- (id)encodedClassName;
- (id)text;
+ (id)disambiguationPod;
+ (id)disambiguationPodWithDictionary:context:;
@end
