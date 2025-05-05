@interface SAGuidanceCheckForGuideUpdateContext : SADomainObject
@property (nonatomic) NSArray supportedFeatures;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)supportedFeatures;
- (void)setSupportedFeatures:;
+ (id)checkForGuideUpdateContext;
+ (id)checkForGuideUpdateContextWithDictionary:context:;
@end
