@interface SAFmfVisibilityStateSet : SADomainCommand
@property (nonatomic) BOOL visible;
- (BOOL)visible;
- (void)setVisible:;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)visibilityStateSet;
+ (id)visibilityStateSetWithDictionary:context:;
@end
