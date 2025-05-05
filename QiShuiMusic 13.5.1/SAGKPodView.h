@interface SAGKPodView : SAAceView
@property (nonatomic) NSString title;
- (id)groupIdentifier;
- (void)setTitle:;
- (id)title;
- (id)encodedClassName;
+ (id)podView;
+ (id)podViewWithDictionary:context:;
@end
